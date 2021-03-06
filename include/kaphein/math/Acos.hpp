#ifndef KAPHEIN_MATH_ACOS_HPP
#define KAPHEIN_MATH_ACOS_HPP

#include "kaphein/pp/basic.hpp"
#include "kaphein/UnsupportedMethodException.hpp"

namespace kaphein
{
namespace math
{
    template <typename E>
    struct Acos
    {
        E operator ()(const E& value)
        {
            throw UnsupportedMethodException();
        }
    };

    template <>
    struct Acos<float>
    {
        float operator ()(const float& value);
    };

    template <>
    struct Acos<double>
    {
        double operator ()(const double& value);
    };

    template <>
    struct Acos<long double>
    {
        long double operator ()(const long double& value);
    };
}
}

#endif
