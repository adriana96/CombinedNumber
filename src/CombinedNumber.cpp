#include "CombinedNumber.hpp"


std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";
    std::stringstream ss;
    std::string s;
    l.sort(std::greater<int>());
    for (auto & it : l) {
        ss << std::to_string(it);
    }
    s = ss.str();
    return s;


}
