#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

struct port
{
    int bits = 0;
    string name = "";
};
struct port_attr
{
    int bits;
    bool is_input;
    string name; // verilog portname
    port_attr(int i1, bool b1, string s1) : bits(i1), is_input(b1), name(s1) {}
};
struct module_io
{
    string module_name;
    vector<port> input;
    vector<port> output;
};

struct inst_module
{
    string inst_name;
    string module_name;
    inst_module() = default;
    inst_module(string s1, string s2) : inst_name(s1), module_name(s2) {}
};

struct module_hierachy
{
    inst_module cur;
    vector<module_hierachy *> childs;
};
// string is module_name
std::map<string, module_io *> IOLists;

module_hierachy *g_mkTop = nullptr;

// all modules
std::vector<module_hierachy *> parents;

// string is inst_name
// std::map<string, module_hierachy*> HierachyLists;

string rule_getall = "get_all_variable";

inline bool is_seperator(char a)
{
    return a == '\n' || a == '\r' || a == '\t' || a == '\n' ||
           a == ' ' || a == ';' || a == '(' || a == ')' || a == ',';
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
// show hierachy
vector<string> get_words_and_hierachy(string &in, int &hiera)
{
    // deal with comment
    int left = 0, right = 0;
    hiera = 0;
    vector<string> ret;
    int comment_cnt = 0;
    for (; left < in.size(); left++)
    {
        if (is_seperator(in[left]))
        {
            if (in[left] == '\t')
            {
                hiera++;
            }
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

bool parse_io(ifstream &fin)
{
    string line;
    vector<string> vec;
    int hiera;
    string cur_module;
    while (getline(fin, line))
    {
        vec = get_words_and_hierachy(line, hiera);
        if (vec.size() == 0)
        {
            continue;
        }
        else if (vec[0] == "end_module_io")
        {
            return true;
        }
        else if (vec[0] == "input_ports")
        {
            port in_port;
            for (int i = 1; i < vec.size(); i += 2)
            {
                in_port.name = vec[i];
                in_port.bits = stoi(vec[i + 1]);
                IOLists[cur_module]->input.push_back(in_port);
            }
        }
        else if (vec[0] == "output_ports")
        {
            port out_port;
            for (int i = 1; i < vec.size(); i += 2)
            {
                out_port.name = vec[i];
                out_port.bits = stoi(vec[i + 1]);
                IOLists[cur_module]->output.push_back(out_port);
            }
        }
        else
        {
            cur_module = vec[0];
            IOLists[cur_module] = new module_io;
            IOLists[cur_module]->module_name = cur_module;
        }
    }
}

bool parse_hierachy(ifstream &fin)
{
    string line;
    vector<string> vec;
    int hiera;
    stack<module_hierachy *> cur_inst;

    while (getline(fin, line))
    {
        vec = get_words_and_hierachy(line, hiera);
        if (vec[0] == "end_module_hierachy")
        {
            return true;
        }
        if (vec.size() < 2)
        {
            cout << "invalid hierachy\n";
            return false;
        }

        module_hierachy *new_child = new module_hierachy;
        new_child->cur.inst_name = vec[0];
        new_child->cur.module_name = vec[1];
        if (cur_inst.size() == hiera - 1)
        {

            // 进入新层级，需要push
            //
            if (vec[0] == "top" && vec[1] == "mkTb")
            {
                g_mkTop = new_child;
            }
            else if (cur_inst.size() == 0)
            {
                cout << "too many top module\n";
                exit(2);
            }
            else
            {
                // parent为cur_inst.top()
                //  parents.push_back(cur_inst.top());
                cur_inst.top()->childs.push_back(new_child);
            }
            parents.push_back(new_child);
            cur_inst.push(new_child);
        }
        else if (cur_inst.size() == hiera)
        {

            // 同一层级，先pop得到parent，再push
            cur_inst.pop();

            module_hierachy *parent = nullptr;
            if (cur_inst.size())
            {
                parent = cur_inst.top();
            }
            else
            {
                cout << "too many top module\n";
                exit(2);
            }
            parent->childs.push_back(new_child);
            cur_inst.push(new_child);
            parents.push_back(new_child);
        }
        else if (cur_inst.size() > hiera)
        {

            // 一直pop到parent
            while (cur_inst.size() > hiera - 1)
            {
                cur_inst.pop();
            }

            module_hierachy *parent = nullptr;
            if (cur_inst.size())
            {
                parent = cur_inst.top();
            }
            else
            {
                cout << "too many top module\n";
                exit(2);
            }
            parent->childs.push_back(new_child);
            cur_inst.push(new_child);
            parents.push_back(new_child);
        }
    }
}

bool get_info()
{
    ifstream fin("./zjout/Hello.rm");
    string line;
    int hiera;
    vector<string> vec;
    while (getline(fin, line))
    {
        vec = get_words_and_hierachy(line, hiera);
        if (vec.size())
        {
            if (vec[0] == "module_io")
            {
                parse_io(fin);
            }
            else if (vec[0] == "module_hierachy")
            {
                parse_hierachy(fin);
            }
        }
    }
    return true;
}

vector<string> get_words_in_cxx(string &in, bool &in_comment)
{
    vector<string> ret;
    int left = 0, right = 0;
    if (in_comment)
    {
        // find out */
        for (int i = 0; i < in.size() - 1; i++)
        {
            if (in[i] == '*' && in[i + 1] == '/')
            {
                in_comment = false;
                left = i + 2;
                break;
            }
        }
        if (in_comment)
        {
            return ret;
        }
    }

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
                bool has_comment = false;
                if (!is_seperator(in[right]))
                {
                    if (in[right] == '/')
                    {
                        if (right < in.size() - 1)
                        {
                            has_comment = true;
                            if (in[right + 1] == '/')
                            {
                                if (left < right)
                                    ret.push_back(in.substr(left, right - left));
                                return ret;
                            }
                            else if (in[right + 1] == '*')
                            {
                                if (left < right)
                                    ret.push_back(in.substr(left, right - left));
                                // find out */
                                in_comment = true;
                                for (int i = right + 1; i < in.size() - 1; i++)
                                {
                                    if (in[i] == '*' && in[i + 1] == '/')
                                    {
                                        in_comment = false;
                                        left = i + 1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    if (has_comment)
                    {
                        if (in_comment == false)
                        {
                            break;
                        }
                        else
                        {
                            return ret;
                        }
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    break;
                }
            }
            if (left < right)
            {
                ret.push_back(in.substr(left, right - left));
                left = right;
            }
        }
    }
    return ret;
}

string g_modified_file;
string g_in_change_prefix = "inchange_";
string g_out_change_prefix = "outchange_";
// now we change the cxx file
bool insert_header(ifstream &fin)
{
    string line;
    vector<string> vec;
    bool in_comment = false;
    while (getline(fin, line))
    {
        vec = get_words_in_cxx(line, in_comment);
        if (vec.size())
        {
            if (vec[0] == "#define")
            {
                g_modified_file += line + "\n\n";
                g_modified_file += "#include \"Types.h\"\n#include \"bluesim_kernel_api.h\"\n#include <stdio.h>\n#include <fstream>\n#include <string>\n#include <inttypes.h>";
                break;
            }
        }
        g_modified_file += line + "\n";
    }
    return true;
}
string get_prefix(string s)
{
    int pos = 0; // pos if '_'
    for (; pos < s.size(); pos++)
    {
        if (s[pos] == '_')
        {
            break;
        }
    }
    return s.substr(0, pos);
}
bool insert_change_lists(ifstream &fin, module_hierachy *cur_module)
{
    vector<string> port_in_cl;
    map<string, port_attr *> port_relation;
    map<string, string> en_regs_relation;
    string line;
    vector<string> vec;
    bool in_comment = false;
    while (getline(fin, line))
    {
        vec = get_words_in_cxx(line, in_comment);
        if (vec.size() == 0)
        {
            g_modified_file += line + "\n";
            continue;
        }
        if (vec.size() > 2)
        {
            if (vec[0] == "class" && vec[1] == "MOD_" + cur_module->cur.module_name)
            {
                g_modified_file += line + "\n";
                getline(fin, line); // {
                g_modified_file += line + "\n";
                // getline(fin, line)
                g_modified_file += " public:\n";
                // g_modified_file += "\tzj_core::Time cur_time = 0;\n";
                // the input of this module
                for (auto &port : IOLists[cur_module->cur.module_name]->input)
                {
                    // TODO: add multiple type
                    if (port.bits <= 64)
                    {
                        string tempName = g_in_change_prefix + port.name;
                        g_modified_file += "\tzj_core::ChangeLists " + tempName + "{\"" + tempName + "\"};\n";
                        port_in_cl.push_back(g_in_change_prefix + port.name);
                        port_relation[port_in_cl.back()] = new port_attr(port.bits, 1, port.name);
                    }
                    else
                    {
                        cout << "ports size do not supported" << endl;
                        return false;
                    }
                }
                // the output of all submodule
                for (auto &submodule : cur_module->childs)
                {
                    for (auto &port : IOLists[submodule->cur.module_name]->output)
                    {
                        // TODO: add multiple type
                        if (port.bits <= 64)
                        {
                            string tempName = g_out_change_prefix + submodule->cur.inst_name + "_" + port.name;
                            g_modified_file += "\tzj_core::ChangeLists " + tempName + "{\"" + tempName + "\"};\n";
                            port_in_cl.push_back(g_out_change_prefix + submodule->cur.inst_name + "_" + port.name);
                            port_relation[port_in_cl.back()] = new port_attr(port.bits, 0, submodule->cur.inst_name + "$" + port.name);
                        }
                        else
                        {
                            cout << "ports size do not supported" << endl;
                            return false;
                        }
                    }
                }
                g_modified_file += "\tvoid print_changelists() {\n";
                g_modified_file += "\t\tprintf(\"" + cur_module->cur.inst_name + "(" + cur_module->cur.module_name +
                                   ")\\n\");\n";
                for (auto &cl : port_in_cl)
                {
                    g_modified_file += "\t\tprintf(\"\\t" + cl + ": \");\n";
                    string temp = "\t\tfor (auto& x : " + cl + "._list) {\n";
                    temp += "\t\t\tprintf(\"%\" PRIu64 \" %\" PRIu64 \"|\", x.at, x.val);\n\t\t}\n";
                    g_modified_file += temp;
                    g_modified_file += "\t\tprintf(\"\\n\");\n";
                }
                g_modified_file += "\t\tprintf(\"\\n\");\n";
                g_modified_file += "\t}\n";

                // TODO: add clk and rst_n
                g_modified_file += "\tvoid generate_testbench(uint64_t sim_time, std::string cur_hierachy) {\n";
                g_modified_file += "\t\tstd::ofstream fout(cur_hierachy + \".v\");\n";
                g_modified_file += "\t\tstd::string out_pre;\n";
                g_modified_file += "\t\tstd::string out_post;\n";
                g_modified_file += "\t\tout_pre += \"`timescale 1ns/1ns\\n\";\n";
                g_modified_file += "\t\tout_pre += \"module testbench();\\n\";\n";
                g_modified_file += "\t\tout_pre += \" reg CLK, RST_N;\\n\";\n";
                string ports;
                string en_regs;
                ports += ".CLK(CLK), \\n\\t\\t.RST_N(RST_N), ";

                g_modified_file += "\t\tout_post += \"always begin\\n\\t#5 CLK = ~CLK;\\nend\\n\";\n";
                g_modified_file += "\t\tout_post += \"initial begin\\n\\tRST_N = 0;\\n\\t#1 CLK = 1;\\n\\t#1 RST_N = 1;\\nend\\n\";\n";
                for (auto &cl : port_in_cl)
                {
                    if (port_relation[cl]->is_input)
                    {
                        string temp = get_prefix(port_relation[cl]->name);
                        en_regs_relation[temp] = cl;
                        en_regs += "EN_" + temp + ", ";
                        ports += "\\n\\t\\t.EN_" + temp + "(EN_" + temp + "), ";
                        ports += "\\n\\t\\t.RDY_" + temp + "(), ";
                        ports += "\\n\\t\\t." + port_relation[cl]->name + "(" + port_relation[cl]->name + "), ";
                        // ports += ".hook_" + port_relation[cl]->name + "(), ";
                        // ports += ".RDY_hook_" + port_relation[cl]->name + "(), ";
                    }
                    else
                    {
                        ports += "\\n\\t\\t." + port_relation[cl]->name + "(" + port_relation[cl]->name + "), ";
                    }
                    int bit = port_relation[cl]->bits;
                    if (bit > 1)
                        g_modified_file += "\t\tout_pre += \" reg [" + to_string(bit - 1) + " : 0] " + port_relation[cl]->name + ";\\n\";\n";
                    else
                        g_modified_file += "\t\tout_pre += \" reg  " + port_relation[cl]->name + ";\\n\";\n";
                    g_modified_file += "\t\tout_post += \" // port: " + port_relation[cl]->name + "\\n\";\n";
                    g_modified_file += "\t\tout_post += \"initial begin\\n\";\n";
                    g_modified_file += "\t\tfor (auto& x : " + cl + "._list) {\n";
                    //输入要比输出滞后一个周期
                    //g_modified_file += "\t\t\tint delay = x.delay > 10 ? x.delay - 10 : (" + cl + ".isHook ? x.delay - 10 : x.delay);\n";
                    g_modified_file += "\t\t\tint delay = x.at == 10 ? x.delay : x.delay;\n";
                    g_modified_file += "\t\t\tout_post += \"\\t#\" + std::to_string(delay) + \" \" + \"" + port_relation[cl]->name + "\" + \" = \" + std::to_string(x.val) + \";\\n\";\n";
                    g_modified_file += "\t\t}\n";
                    g_modified_file += "\t\tout_post += \"end\\n\";\n";
                }
                for (auto &out_port : IOLists[cur_module->cur.module_name]->output)
                {
                    ports += "\\n\\t\\t." + out_port.name + "(), ";
                    ports += "\\n\\t\\t.RDY_" + out_port.name + "(), ";
                }
                for (int i = 0; i < 2; i++)
                {
                    ports.pop_back();
                    if (en_regs.size())
                        en_regs.pop_back();
                }
                g_modified_file += "\t\tout_post += \" // for en_regs \\n\\n\";\n";

                for (auto& relation : en_regs_relation)
                {
                    string cl = relation.second;
                    g_modified_file += "\t\tout_post += \"initial begin\\n\";\n";
                    g_modified_file += "\t\t\t\tout_post += \"\\t#\" + std::to_string(0) + \" \" + \"" + string("EN_") + relation.first + "\" + \" = \" + \"0\" + \";\\n\";\n";
                    g_modified_file += "\t\tbool is_first = true;\n";
                    g_modified_file += "\t\tbool is_second = true;\n";
                    g_modified_file += "\t\tfor (auto& x : " + cl + "._list) {\n";
                    g_modified_file += "\t\t\tif (x.at >= 10) {\n";
                    g_modified_file += "\t\t\t\tint temp = is_first ? x.at : x.delay - 10;\n";
                    g_modified_file += "\t\t\t\tint offset = is_first == false && is_second ? -10 : 0;\n";
                    g_modified_file += "\t\t\t\tis_second = is_first == true ? true : false;\n";
                    g_modified_file += "\t\t\t\tis_first = false;\n";
                    g_modified_file += "\t\t\t\tout_post += \"\\t#\" + std::to_string(temp + offset) + \" \" + \"" + string("EN_") + relation.first + "\" + \" = \" + \"1\" + \";\\n\";\n";
                    g_modified_file += "\t\t\t\tout_post += \"\\t#\" + std::to_string(10) + \" \" + \"" + string("EN_") + relation.first + "\" + \" = \" + \"0\" + \";\\n\";\n";
                    g_modified_file += "\t\t\t}\n";
                    g_modified_file += "\t\t}\n";
                    g_modified_file += "\t\tout_post += \"end\\n\";\n";
                }
                if (en_regs.size())
                {
                    // g_modified_file += "\t\tout_post += \"initial begin\\n\";\n";
                    // vector<string> ens = get_words(en_regs);
                    // for (auto en : ens)
                    // {
                    //     g_modified_file += "\t\tout_post += \"\\t" + en + " = 1;\\n\";\n";
                    // }
                    // g_modified_file += "\t\tout_post += \"end\\n\";\n";

                    g_modified_file += "\t\tout_pre += \" reg " + en_regs + ";\\n\";\n";
                }

                g_modified_file += "\t\tout_pre += \" " + cur_module->cur.module_name + " U1(" + ports + ");\\n\";\n";
                g_modified_file += "\t\tout_post += \"initial begin\\n\";\n";
                g_modified_file += "\t\tout_post += \"\\t#\" + std::to_string(sim_time) + \" $finish;\\n\";\n";
                g_modified_file += "\t\tout_post += \"end\\n\";\n";
                g_modified_file += "\t\tout_post += \"endmodule\\n\";\n";
                g_modified_file += "\t\tfout << out_pre << out_post;\n";
                g_modified_file += "\t}\n";
            }
            else
            {
                g_modified_file += line + "\n";
            }
        }
        else
        {
            g_modified_file += line + "\n";
        }
    }
}
bool change_header(module_hierachy *cur_module)
{
    ifstream fin("../2.DecCounter/zjout/" + cur_module->cur.module_name + ".h");
    insert_header(fin);
    insert_change_lists(fin, cur_module);
    string outfile = "../2.DecCounter/zjout/" + cur_module->cur.module_name + ".h";
    ofstream fout(outfile);
    fout << g_modified_file;
    fout.close();
    fin.close();
}
bool change_cxx(module_hierachy *cur_module)
{
    ifstream fin("../2.DecCounter/zjout/" + cur_module->cur.module_name + ".cxx");
    string line;
    vector<string> vec;
    bool hiera = 0;
    while (getline(fin, line))
    {
        vec = get_words_in_cxx(line, hiera);
        if (vec.size() >= 2)
        {
            if (vec[0] == "void" && vec[1] == "MOD_" + cur_module->cur.module_name + "::RL_get_all_variable")
            {
                g_modified_file += line + "\n";
                if (line.back() != '{')
                    g_modified_file += "{\n";
                g_modified_file += "\tuint64_t cur_time = bk_now(sim_hdl);\n";
                for (auto &port : IOLists[cur_module->cur.module_name]->input)
                {
                    string tempval = "tempval_" + port.name;
                    g_modified_file += "\tuint64_t " + tempval + " = static_cast<uint64_t>(" + "METH_hook_" + port.name + "());\n";
                    g_modified_file += "\tif (inchange_" + port.name + "._list.size() == 0 || " +
                                       tempval + " != inchange_" + port.name + "._list.back().val) {\n";
                    g_modified_file += "\t\tinchange_" + port.name + ".emplace_back(" + "cur_time, " +
                                       tempval + ");\n\t}\n";
                }
                // the output of all submodule
                for (auto &submodule : cur_module->childs)
                {
                    for (auto &port : IOLists[submodule->cur.module_name]->output)
                    {
                        string tempport = submodule->cur.inst_name + "_" + port.name;
                        string tempval = "tempval_" + tempport;
                        g_modified_file += "\tuint64_t " + tempval + " = static_cast<uint64_t>(INST_" + submodule->cur.inst_name +
                                           ".METH_" + port.name + "());\n";
                        g_modified_file += "\tif (outchange_" + tempport + "._list.size() == 0 || " +
                                           tempval + " != outchange_" + tempport + "._list.back().val) {\n";
                        g_modified_file += "\t\toutchange_" + tempport + ".emplace_back(" + "cur_time, " +
                                           tempval + ");\n\t}\n";
                    }
                }
                // g_modified_file += " // sim time plus 1\n\tcur_time++;\n";
                while (line != "}")
                {
                    getline(fin, line);
                }
                g_modified_file += line + "\n";
            }
            else
            {
                g_modified_file += line + "\n";
            }
        }
        else
        {
            g_modified_file += line + "\n";
        }
    }
    string outfile = "../2.DecCounter/zjout/" + cur_module->cur.module_name + ".cxx";
    ofstream fout(outfile);
    fout << g_modified_file;
}
string g_insert_print_prefix = "\tp_model->mkTb_instance->";
bool insert_print(module_hierachy *cur_module, string cur_stack)
{
    if (cur_module == nullptr)
    {
        return false;
    }
    if (cur_module != g_mkTop)
    {
        g_modified_file += g_insert_print_prefix + cur_stack + "INST_" + cur_module->cur.inst_name + ".print_changelists();\n";
    }
    else
    {
        g_modified_file += g_insert_print_prefix + "print_changelists();\n";
    }

    for (auto &sub : cur_module->childs)
    {
        if (cur_module != g_mkTop)
        {
            insert_print(sub, cur_stack + "INST_" + cur_module->cur.inst_name + ".");
        }
        else
        {
            insert_print(sub, "");
        }
    }
}
string g_insert_generate_prefix = "\tp_model->mkTb_instance->";
bool insert_generate(module_hierachy *cur_module, string cur_stack)
{
    if (cur_module == nullptr)
    {
        return false;
    }
    if (cur_module != g_mkTop)
    {
        g_modified_file += g_insert_generate_prefix + cur_stack + "INST_" +
                           cur_module->cur.inst_name + ".generate_testbench(bk_now(sim), \"tb$top." + cur_stack + "INST_" + cur_module->cur.inst_name + "\");\n";
    }
    else
    {
        g_modified_file += g_insert_generate_prefix + "generate_testbench(bk_now(sim), \"" +
                           cur_stack + "\");\n";
    }

    for (auto &sub : cur_module->childs)
    {
        if (cur_module != g_mkTop)
        {
            insert_generate(sub, cur_stack + "INST_" + cur_module->cur.inst_name + ".");
        }
        else
        {
            insert_generate(sub, "");
        }
    }
}
bool change_main()
{
    g_modified_file = "";
    ifstream fin("../2.DecCounter/zjout/main.cpp");
    string line;
    vector<string> vec;
    bool hiera = 0;
    while (getline(fin, line))
    {
        vec = get_words_in_cxx(line, hiera);
        if (vec.size() && vec[0] == "bk_shutdown")
        {
            g_modified_file += "  MODEL_mkTb* p_model = (MODEL_mkTb*)(model);\n";
            insert_print(g_mkTop, "");
            insert_generate(g_mkTop, "tb$top");
        }
        g_modified_file += line + "\n";
    }
    ofstream fout("../2.DecCounter/zjout/main.cpp");
    fout << g_modified_file;
}
void bs_til_n()
{
    if (g_modified_file.size() && g_modified_file.back() == '\n')
    {
        g_modified_file.pop_back();
    }
    while (g_modified_file.size() && g_modified_file.back() != '\n')
    {
        g_modified_file.pop_back();
    }
}
bool get_public()
{
    g_modified_file = "";
    ifstream fin("../2.DecCounter/zjout/model_mkTb.h");
    string line;
    vector<string> vec;
    bool hiera = 0;
    while (getline(fin, line))
    {
        vec = get_words_in_cxx(line, hiera);
        if (vec.size() && vec[0] == "MOD_mkTb")
        {
            bs_til_n();
            g_modified_file += "\n /* let top module instance be public */\n";
            g_modified_file += " public:\n";
        }
        g_modified_file += line + "\n";
    }
    ofstream fout("../2.DecCounter/zjout/model_mkTb.h");
    fout << g_modified_file;
}
bool is_sub(string s, module_hierachy *cur_module)
{
    for (auto &sub : cur_module->childs)
    {
        if (sub->cur.module_name == s)
        {
            return true;
        }
    }
    return false;
}
bool change_verilog(module_hierachy *cur_module)
{
    // first, add all output of its submodules
    g_modified_file = "";
    ifstream fin("../2.DecCounter/zjout/" + cur_module->cur.module_name + ".v");
    string line;
    vector<string> vec;
    bool in_comment = 0;
    while (getline(fin, line))
    {
        vec = get_words_in_cxx(line, in_comment);
        if (vec.size() >= 2 && vec[0] == "module" && vec[1] == cur_module->cur.module_name)
        {
            g_modified_file += line + "\n";
            getline(fin, line);
            if (line.size() > 0 && line[line.size() - 1] == ';')
            {
                string space_prefix = "       ";
                g_modified_file += space_prefix + "RST_N,\n";
                for (auto &submodule : cur_module->childs)
                {
                    for (auto &out_port : IOLists[submodule->cur.module_name]->output)
                    {
                        g_modified_file += space_prefix + submodule->cur.inst_name + "$" + out_port.name + ",\n";
                    }
                    g_modified_file += "\n";
                }
                g_modified_file += space_prefix + ");\n";
            }
            else 
            {
                g_modified_file += line + "\n\n";
                string space_prefix = "       ";
                for (auto &submodule : cur_module->childs)
                {
                    for (auto &out_port : IOLists[submodule->cur.module_name]->output)
                    {
                        g_modified_file += space_prefix + submodule->cur.inst_name + "$" + out_port.name + ",\n";
                    }
                    g_modified_file += "\n";
                }
            }
            
        }
        else if (vec.size() >= 2 && vec[0] == "input" && vec[1] == "RST_N")
        {
            g_modified_file += line + "\n\n";
            string space_prefix = "  ";
            for (auto &submodule : cur_module->childs)
            {
                for (auto &out_port : IOLists[submodule->cur.module_name]->output)
                {
                    int bit = out_port.bits;
                    if (bit == 1) 
                    {
                        g_modified_file += space_prefix + "input  " 
                                        + submodule->cur.inst_name + "$" + out_port.name + ";\n";
                    }
                    else 
                    {
                        g_modified_file += space_prefix + "input  [" + to_string(out_port.bits - 1) +
                                       " : 0] " + submodule->cur.inst_name + "$" + out_port.name + ";\n";
                    }
                }
                g_modified_file += "\n";
            }
        }
        else if (vec.size() > 2 && is_sub(vec[0], cur_module))
        {
            char ch = '\0';
            while (ch != ';')
            {
                ch = fin.get();
            }
        }
        else
        {
            g_modified_file += line + "\n";
        }
    }
    ofstream fout("../2.DecCounter/zjout/" + cur_module->cur.module_name + ".v");
    fout << g_modified_file;
}
int main()
{

    get_info();

    for (auto &x : parents)
    {
        cout << x->cur.inst_name << " " << x->cur.module_name << endl;
        g_modified_file = "";
        change_header(x);
        g_modified_file = "";
        change_cxx(x);
    }
    change_main();

    get_public();

    for (auto &x : parents)
    {
        cout << x->cur.module_name << endl;
        change_verilog(x);
    }
}