#ifndef KAPHEIN_MATH_SIN_HPP
#define KAPHEIN_MATH_SIN_HPP

#include "kaphein/pp/basic.hpp"
#include "kaphein/UnsupportedMethodException.hpp"

namespace kaphein
{
namespace math
{
    template <typename E>
    struct Sin
    {
        E operator ()(const E& radian)
        {
            throw UnsupportedMethodException();
        }
    };

    template <>
    struct Sin<float>
    {
        float operator ()(const float& radian);
    };

    template <>
    struct Sin<double>
    {
        double operator ()(const double& radian);
    };

    template <>
    struct Sin<long double>
    {
        long double operator ()(const long double& radian);
    };
}
}

#endif
