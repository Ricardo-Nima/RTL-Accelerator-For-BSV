// get the intermediate variable for each module
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <set>
#include <vector>
#include <sys/types.h>
#include <sys/stat.h>

using namespace std;

struct port
{
    int bits = 0;
    string name = "";
};

// interface
// some input port and output port...
struct interface_info
{
    string name = "";
    vector<port> input;
    vector<port> output;
    vector<port> hookout;
};

// each module contains one interface
struct module_info
{
    string name = ""; // no instance name !!
    interface_info *inout = nullptr;
    std::map<string, module_info *> submodules; // first represent the instance name of its module
};

// global variable
typedef std::map<string, interface_info *> InterfaceLists;
typedef std::map<string, module_info *> ModuleLists;
InterfaceLists g_InterfaceLists;
ModuleLists g_ModuleLists;
string g_mktop_name = "mkTb"; // name of the top module
string modified_file;         // store the temp file
string hook_prefix = "hook_";
string hook_reg_prefix = "hook_reg_";
string rule_getall = "get_all_variable"; // get all intermediate variable in mkTb

// recusive
// pre and post for $display()
bool get_intermediate_val(string module_name, string &pre, string &post)
{
    if (g_ModuleLists[module_name]->submodules.size())
    {
        for (auto &iter : g_ModuleLists[module_name]->submodules)
        {
            // get_intermediate_val(iter.second->name, pre, post, cur_pre, cur_post + iter.first + ".");
            interface_info *cur_interface = iter.second->inout;
            if (cur_interface)
            {
                for (auto &out_port : cur_interface->output)
                {
                    pre += out_port.name + " = %d ";
                    post += ", " + iter.first + "." + out_port.name;
                }
                for (auto &hook_port : cur_interface->hookout)
                {
                    pre += hook_port.name + " = %d ";
                    post += ", " + iter.first + "." + hook_port.name;
                }
            }
        }
    }
}

inline bool is_seperator(char a)
{
    return a == '\n' || a == '\r' || a == '\t' || a == '\n' || a == ' ' || a == ';' || a == '(' || a == ')';
}

vector<string> get_words(string &in)
{
    // deal with comment
    int left = 0, right = 0;
    vector<string> ret;
    int comment_cnt = 0;
    for (; left < in.size(); left++)
    {
        if (is_seperator(in[left]))
        {
            continue;
        }
        else
        {
            for (right = left; right < in.size(); right++)
            {
                if (!is_seperator(in[right]))
                {
                    if (in[right] == '/')
                    {
                        comment_cnt++;
                    }
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (comment_cnt == 2)
            {
                // encounter a comment
                break;
            }
            ret.push_back(in.substr(left, right - left));
            left = right;
        }
    }
    return ret;
}

// next, we need to handle three parts: package, interface and module
bool handle_interface(ifstream &fin, vector<string> &pre)
{
    // this function is used to find input and output ports corresponded to Verilog
    // as a preliminary version, it do not support ActionValue method so far
    if (pre.size() < 2)
    {
        cout << "no interface name was specified\n";
        return false;
    }
    string interface_name = pre[1];
    g_InterfaceLists[interface_name] = new interface_info;
    g_InterfaceLists[interface_name]->name = interface_name;
    string line;
    vector<string> vec;
    while (getline(fin, line))
    {
        vec = get_words(line);
        if (vec.size() == 0)
        {
            modified_file += line + "\n";
            continue;
        }
        else if (vec[0] == "endinterface")
        {
            modified_file += line + "\n";
            return true;
        }
        if (vec.size() < 3)
        {
            cout << "invalid mothod\n";
            return false;
        }
        if (vec[1] == "Action")
        {
            // action method
            modified_file += line + "\n";
            port in_port;
            in_port.name = vec[2] + "_"; // imcompleted name
            if (vec[3] == "Bit#" || vec[3] == "UInt#" || vec[3] == "Int#")
            {
                in_port.bits = stoi(vec[4]);
                in_port.name += vec[5];
            }
            else if (vec[3] == "Bool")
            {
                in_port.bits = 1;
                in_port.name += vec[4];
            }
            g_InterfaceLists[interface_name]->input.push_back(in_port);
            // TODO: add hook method
            port hook_port;
            hook_port.bits = in_port.bits;
            hook_port.name = hook_prefix + in_port.name;
            modified_file += "\tmethod Bit#(" + to_string(hook_port.bits) + ") " + hook_port.name + ";\n";
            g_InterfaceLists[interface_name]->hookout.push_back(hook_port);
        }
        else
        {
            // value method
            modified_file += line + "\n";
            port out_port;
            if (vec[1] == "Bit#" || vec[1] == "UInt#" || vec[1] == "Int#")
            {
                out_port.bits = stoi(vec[2]);
                out_port.name = vec[3];
            }
            else if (vec[1] == "Bool")
            {
                out_port.bits = 1;
                out_port.name = vec[2];
            }
            g_InterfaceLists[interface_name]->output.push_back(out_port);
        }
    }
}

bool handle_module(ifstream &fin, vector<string> &pre)
{
    // find out the interface and submodules of this module
    // do not support "let" statement so far
    if (pre.size() < 2)
    {
        cout << "invalid syntax for specifying a module\n";
        return false;
    }
    bool rule_getall_impl = 0;

    string module_name = pre[1];
    g_ModuleLists[module_name] = new module_info;
    g_ModuleLists[module_name]->name = module_name;
    if (pre.size() >= 3 && g_InterfaceLists.count(pre[2]))
    {
        g_ModuleLists[module_name]->inout = g_InterfaceLists[pre[2]];
        // 根据接口名找到hookout
        for (auto &hook_port : g_ModuleLists[module_name]->inout->hookout)
        {
            modified_file += "\tReg#(Bit#(" + to_string(hook_port.bits) + ")) " +
                             hook_reg_prefix + hook_port.name + " <- mkReg(" + to_string(hook_port.bits) +
                             "'h0);\n";
        }
    }
    string line;
    vector<string> vec;
    while (getline(fin, line))
    {
        vec = get_words(line);

        if (vec.size() == 0)
        {
            modified_file += line + "\n";
            continue;
        }
        else if (vec[0] == "endmodule")
        {
            // if exist hook port, then inplement hook method
            if (g_ModuleLists[module_name]->inout)
            {
                for (auto &hook_port : g_ModuleLists[module_name]->inout->hookout)
                {
                    modified_file += "\tmethod Bit#(" + to_string(hook_port.bits) + ") " +
                                     hook_port.name + " = " + hook_reg_prefix + hook_port.name + ";\n";
                }
            }
            if (rule_getall_impl == false)
            {
                string pre, post;
                get_intermediate_val(module_name, pre, post);
                // if has submodule
                // rule for all

                // if (pre.size() && post.size())
                if (true)
                {
                    modified_file += "\trule " + rule_getall + ";\n";
                    // cout << pre << "|" << post;
                    modified_file += "\t\t$display(\"" + pre + "\"" + post + ");\n\tendrule\n\n";
                }
                rule_getall_impl = true;
            }

            modified_file += line + "\n";
            return true;
        }
        else if (g_InterfaceLists.count(vec[0]))
        {
            // submodule found
            modified_file += line + "\n";
            g_ModuleLists[module_name]->submodules[vec[1]] = g_ModuleLists[vec[3]];
        }
        else if (vec.size() > 2 && vec[0] == "method" && vec[1] == "Action")
        {
            if (rule_getall_impl == false)
            {
                string pre, post;
                get_intermediate_val(module_name, pre, post);
                // if has submodule
                // rule for all

                // if (pre.size() && post.size())
                if (true)
                {
                    modified_file += "\trule " + rule_getall + ";\n";
                    // cout << pre << "|" << post;
                    modified_file += "\t\t$display(\"" + pre + "\"" + post + ");\n\tendrule\n";
                }
                rule_getall_impl = true;
            }
            // implement of action method
            string port_name = vec[2] + "_" + vec.back();
            // cout << port_name << endl;
            modified_file += line + "\n";
            modified_file += "\t\t" + hook_reg_prefix + hook_prefix + port_name + " <= " + vec.back() + ";\n";
        }
        else if (vec[0] == "rule")
        {
            if (rule_getall_impl == false)
            {
                string pre, post;
                get_intermediate_val(module_name, pre, post);
                // if has submodule
                // rule for all

                // if (pre.size() && post.size())
                if (true)
                {
                    modified_file += "\trule " + rule_getall + ";\n";
                    // cout << pre << "|" << post;
                    modified_file += "\t\t$display(\"" + pre + "\"" + post + ");\n\tendrule\n";
                }
                rule_getall_impl = true;
            }
            modified_file += line + "\n";
        }
        else
        {
            modified_file += line + "\n";
        }
    }
}

bool handle_package(ifstream &fin, vector<string> &pre)
{
    if (pre.size() < 2)
    {
        cout << "no package name was specified\n";
        return false;
    }
    string package_name = pre[1];
    string line;
    vector<string> vec;
    while (getline(fin, line))
    {
        vec = get_words(line);
        modified_file += line + "\n";
        if (vec.size() == 0)
        {
            continue;
        }
        if (vec[0] == "endpackage")
        {
            return true;
        }
        else if (vec[0] == "interface")
        {
            handle_interface(fin, vec);
        }
        else if (vec[0] == "module")
        {
            handle_module(fin, vec);
        }
    }
}

// this function record the module_io and module_hierachy
bool record_hierachy(ofstream &fout, string &out, string module_name, string inst_name, string cur_tab)
{
    if (module_name == g_mktop_name)
    {
        out += cur_tab + "top(" + module_name + ")\n";
    }
    else
    {
        out += cur_tab + inst_name + "(" + module_name + ")\n";
    }
    for (auto &sub : g_ModuleLists[module_name]->submodules)
    {
        record_hierachy(fout, out, sub.second->name, sub.first, cur_tab + "\t");
    }
}

bool record_info()
{
    ofstream fout("./zjout/Hello.rm");
    string out;
    out += " // record the module_io and module_hierachy\n";
    out += "module_io\n";
    for (auto &module_iter : g_ModuleLists)
    {
        out += "\t" + module_iter.first + "\n";
        out += "\t\tinput_ports(";
        if (module_iter.second->inout)
        {
            string temp;
            for (auto &in_port : module_iter.second->inout->input)
            {
                temp += in_port.name + "(" + to_string(in_port.bits) + ") ";
            }
            if (temp.size())
            {
                out += temp;
            }
            else
            {
                out += " ";
            }
        }
        else
        {
            out += " ";
        }
        out.back() = ')';
        out += "\n";

        out += "\t\toutput_ports(";
        if (module_iter.second->inout)
        {
            string temp;
            for (auto &out_port : module_iter.second->inout->output)
            {
                temp += out_port.name + "(" + to_string(out_port.bits) + ") ";
            }
            for (auto &out_port : module_iter.second->inout->hookout)
            {
                temp += out_port.name + "(" + to_string(out_port.bits) + ") ";
            }
            if (temp.size())
            {
                out += temp;
            }
            else
            {
                out += " ";
            }
        }
        else
        {
            out += " ";
        }
        out.back() = ')';
        out += "\n";
    }
    out += "end_module_io\n\n";
    out += "module_hierachy\n";
    record_hierachy(fout, out, g_mktop_name, "", "\t");
    out += "end_module_hierachy\n";
    fout << out;
}
void copy_files()
{

}
int main()
{
    ifstream fin("../1.Hello/Hello.bsv");
    string line;
    if (fin)
    {
        while (getline(fin, line))
        {
            vector<string> vec = get_words(line);
            modified_file += line + "\n";
            if (vec.size())
            {
                handle_package(fin, vec);
            }
        }
        cout << endl;
    }
    else
    {
        cout << "no such file" << endl;
    }
    // 新建build文件夹
    const char *dirpath = "./zjout";
    struct stat file_stat;
    int ret = stat(dirpath, &file_stat); // 检查文件夹状态
    if (ret < 0)
    {
        if (errno == ENOENT) // 是否已经存在该文件夹
        {
            ret = mkdir(dirpath, 0775); // 创建文件夹
            printf("creat dir '/%s'/\n", dirpath);
            if (ret < 0)
            {
                printf("Could not create directory \'%s\' \n",
                       dirpath);
                return EXIT_FAILURE;
            }
        }
        else
        {
            printf("bad file path\n");
            return EXIT_FAILURE;
        }
    }

    ofstream fout("./zjout/Hello.bsv");
    fout << modified_file;

    record_info();

}
