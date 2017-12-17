/*
 *  Copyright (c) Hydrawisk793
 *  All rights reserved.
 *
 *  This code is licensed under the MIT License.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files(the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions :
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

#ifndef KAPHEIN_FUNCTIONAL_FREEFUNCTIONWRAPPER_HPP
#define KAPHEIN_FUNCTIONAL_FREEFUNCTIONWRAPPER_HPP

#include "FunctionWrapper.hpp"

namespace kaphein
{
namespace functional
{
#define KAPHEIN_xx_DECLARE_CLASS_BODY(...) \
    public: \
        typedef R (*FreeFunctionPtrType)( \
            KAPHEIN_x_MAKE_ARGUMENT_LIST(__VA_ARGS__) \
        ); \
         \
    private: \
        struct Attribute \
        { \
            FreeFunctionPtrType freeFunctionPtr; \
        }; \
         \
    public: \
        FreeFunctionWrapper(FreeFunctionPtrType freeFunctionPtr = nullptr) \
        { \
            attr_.freeFunctionPtr = freeFunctionPtr; \
        } \
         \
        FreeFunctionWrapper(const FreeFunctionWrapper& src) \
        { \
            attr_.freeFunctionPtr = src.attr_.freeFunctionPtr; \
        } \
         \
        FreeFunctionWrapper(FreeFunctionWrapper&& src) \
        { \
            attr_.freeFunctionPtr = std::move(src.attr_.freeFunctionPtr); \
        } \
         \
        FreeFunctionWrapper& operator =(const FreeFunctionWrapper& rhs) \
        { \
            attr_ = rhs.attr_; \
             \
            return *this; \
        } \
         \
        FreeFunctionWrapper& operator =(FreeFunctionWrapper&& rhs) \
        { \
            attr_ = std::move(rhs.attr_); \
             \
            return *this; \
        } \
         \
    public: \
        virtual R operator ()( \
            KAPHEIN_x_MAKE_ARGUMENT_LIST(__VA_ARGS__) \
        ) const \
        { \
            return (*attr_.freeFunctionPtr)( \
                KAPHEIN_x_MAKE_ARGVAR_LIST(__VA_ARGS__) \
            ); \
        } \
     \
    private: \
        Attribute attr_;

#define KAPHEIN_xx_DECLARE_CLASS(...) \
    /** \
     *  @brief  \
     *  @date 2017-04-10 \
     */ \
    template < \
        typename R \
        KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST(__VA_ARGS__) \
    > \
    class FreeFunctionWrapper< \
        R \
        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
    > \
        : public FunctionWrapper< \
            R \
            KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST(__VA_ARGS__) \
        > \
    { \
        KAPHEIN_xx_DECLARE_CLASS_BODY(__VA_ARGS__) \
    };

template <
    typename R
    , typename A1 = Dummy
    , typename A2 = Dummy
    , typename A3 = Dummy
    , typename A4 = Dummy
>
class FreeFunctionWrapper
    : public FunctionWrapper<R, A1, A2, A3, A4>
{
    KAPHEIN_xx_DECLARE_CLASS_BODY(A1, A2, A3, A4)
};

KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3)
KAPHEIN_xx_DECLARE_CLASS(A1, A2)
KAPHEIN_xx_DECLARE_CLASS(A1)
KAPHEIN_xx_DECLARE_CLASS()

#undef KAPHEIN_xx_DECLARE_CLASS
#undef KAPHEIN_xx_DECLARE_CLASS_BODY
}
}

#endif