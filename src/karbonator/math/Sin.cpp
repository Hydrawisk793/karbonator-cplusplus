#include <cmath>
#include "karbonator/math/Sin.hpp"

namespace karbonator
{
namespace math
{
    float Sin<float>::operator ()(const float& radian)
    {
        return std::sin(radian);
    }

    double Sin<double>::operator ()(const double& radian)
    {
        return std::sin(radian);
    }

    long double Sin<long double>::operator ()(const long double& radian)
    {
        return std::sin(radian);
    }
}
}