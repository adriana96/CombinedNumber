#include "CombinedNumber.hpp"


std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";
    std::stringstream ss;
    std::string s;
    for (auto & it : l) {
        ss << std::to_string(it);
    }
    s = ss.str();
    return s;


}
