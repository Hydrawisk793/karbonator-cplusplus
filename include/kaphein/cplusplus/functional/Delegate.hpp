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

#ifndef KAPHEIN_FUNCTIONAL_DELEGATE_HPP
#define KAPHEIN_FUNCTIONAL_DELEGATE_HPP

#include "kaphein/cplusplus/pp/basic.hpp"
#include "kaphein/cplusplus/memory/DefaultAllocator.hpp"
#include "DelegateBase.hpp"

namespace kaphein
{
namespace functional
{
    template <
        typename R
        , class A1, class A2, class A3, class A4
        , typename Alloc = memory::DefaultAllocator
    >
    class Delegate
    {
    public:
        Delegate();

        Delegate(const Delegate<R, A1, A2, A3, A4, Alloc>& rhs);

        Delegate(Delegate<R, A1, A2, A3, A4, Alloc>&& rhs);
        
        virtual ~Delegate();

        Delegate<R, A1, A2, A3, A4, Alloc> & operator =(
            const Delegate<R, A1, A2, A3, A4, Alloc>& rhs
        );

        Delegate<R, A1, A2, A3, A4, Alloc> & operator =(
            Delegate<R, A1, A2, A3, A4, Alloc>&& rhs
        );

        DelegateBase & operator =(std::nullptr_t /*rhs*/);

    public:
        void clear();

        R operator ()(A1 a1, A2 a2, A3 a3, A4 a4) const
        {
            if(pWrapper_ == nullptr) {
                throw NullPointerException();
            }

            return (*static_cast<FunctionWrapperType *>(pWrapper_))(a1, a2, a3, a4);
        }

    public:
        bool operator ==(std::nullptr_t /*rhs*/) const;

        bool operator !=(std::nullptr_t rhs) const;

    private:
        FunctionWrapperBase* pWrapper_;
    };
}
}

#endif
