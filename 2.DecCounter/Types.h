// Types
#ifndef __ZJ_TYPES__
#define __ZJ_TYPES__
#include <vector>
#include <string>
#include <stdint.h>

namespace zj_core
{
    struct Change
    {
        uint64_t at;
        uint64_t val;
        uint64_t delay;
        Change(int i1, int i2, int i3) : at(i1), val(i2), delay(i3) {}
    };
    struct ChangeLists
    {
    public:
        std::vector<Change> _list;
        bool isHook;
        ChangeLists() = delete;
        ChangeLists(const std::string name) : isHook(is_contain_hook(name)) { }
        void emplace_back(int i1, int i2)
        {
            if (_list.size() == 0)
                _list.emplace_back(i1, i2, i1);
            else
                _list.emplace_back(i1, i2, i1 - _list.back().at);
        }
    private:
        bool is_contain_hook(const std::string name)
        {
            std::string::size_type idx;
            idx = name.find("_hook_");
            if (idx == std::string::npos)
                return false;
            else 
                return true;
        }
    };
    typedef uint64_t Time;
}
#endif