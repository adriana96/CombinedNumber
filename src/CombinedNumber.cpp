#include "CombinedNumber.hpp"


std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    if (l.empty())
        return "";
    std::vector<std::string> vs(l.size());
    std::transform(l.begin(), l.end(), vs.begin(), [](const auto & number) {
        return std::to_string(number);
    });
    if(l.size() == 1)
        return vs.at(0);
    std::string value = "";
    for (int i = 0; i <= vs.size() - 1; i++) {
    auto me = std::max_element(vs.begin(), vs.end(), [] (const auto & a, const auto & b) {
    return a[0] < b[0];
    });
    value += *me;
    vs.erase(me);
    }
    value += vs[0];
    return value;

}
