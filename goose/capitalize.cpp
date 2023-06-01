#include "capitalize.hpp"
#include <algorithm>

std::string Capitalizer::operator() (std::string s) const
{
    std::string result(std::move(s));
    std::transform(result.begin(), result.end(), result.begin(),
        [](unsigned char c){ return std::toupper(c); }
    );
    return result;
}
