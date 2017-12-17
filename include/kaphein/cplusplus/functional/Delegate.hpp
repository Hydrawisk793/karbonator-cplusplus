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
