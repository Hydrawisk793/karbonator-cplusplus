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

#ifndef KAPHEIN_FUNCTIONAL_FUNCTIONWRAPPERBASE_HPP
#define KAPHEIN_FUNCTIONAL_FUNCTIONWRAPPERBASE_HPP

#include "kaphein/cplusplus/pp/basic.hpp"

namespace kaphein
{
namespace functional
{
    class KAPHEIN_PP_DLL_API FunctionWrapperBase
    {
    public:
        virtual ~FunctionWrapperBase();

        //virtual int copyConstruct(FunctionWrapperBase* pDest) const = 0;

        //virtual int clone(FunctionWrapperBase* pDest) const = 0;

    public:
        bool operator ==(const FunctionWrapperBase& rhs) const;

        bool operator !=(const FunctionWrapperBase& rhs) const;

        bool operator <(const FunctionWrapperBase& rhs) const;

        bool operator >=(const FunctionWrapperBase& rhs) const;

        bool operator <=(const FunctionWrapperBase& rhs) const;

        bool operator >(const FunctionWrapperBase& rhs) const;
        
    protected:
        virtual void getPointerBytes(
            const void *& bytesOut
            , SizeType & sizeOut
        ) const = 0;

    private:
        static int compareBytes(
            const void* pLhsBytes
            , SizeType lhsSize
            , const void* pRhsBytes
            , SizeType rhsSize
        );
    };
}
}

#endif
