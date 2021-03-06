#ifndef KAPHEIN_MATH_ATAN2_HPP
#define KAPHEIN_MATH_ATAN2_HPP

#include "kaphein/pp/basic.hpp"
#include "kaphein/UnsupportedMethodException.hpp"

namespace kaphein
{
namespace math
{
    template <typename E>
    struct Atan2
    {
        E operator ()(const E& y, const E& x)
        {
            throw UnsupportedMethodException();
        }
    };

    template <>
    struct Atan2<float>
    {
        float operator ()(const float& y, const float& x);
    };

    template <>
    struct Atan2<double>
    {
        double operator ()(const double& y, const double& x);
    };

    template <>
    struct Atan2<long double>
    {
        long double operator ()(const long double& y, const long double& x);
    };
}
}

#endif
