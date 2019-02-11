#include "CombinedNumber.hpp"


std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";
    return std::to_string(l.front());

}
