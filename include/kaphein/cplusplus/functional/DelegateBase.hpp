#ifndef KAPHEIN_FUNCTIONAL_DELEGATEBASE_HPP
#define KAPHEIN_FUNCTIONAL_DELEGATEBASE_HPP

#include <cstddef>
#include "kaphein/cplusplus/pp/basic.hpp"

namespace kaphein
{
namespace functional
{
    class KAPHEIN_PP_DLL_API DelegateBase
    {
    public:
        DelegateBase();

        DelegateBase(const DelegateBase& src);

        DelegateBase(DelegateBase&& src);

        virtual ~DelegateBase();

        DelegateBase& operator =(const DelegateBase& rhs);

        DelegateBase& operator =(DelegateBase&& rhs);

    protected:
        DelegateBase(FunctionWrapperBase * pWrapper);

    public:
        bool operator ==(std::nullptr_t /*rhs*/) const;

        bool operator !=(std::nullptr_t rhs) const;

    public:
        DelegateBase & operator =(std::nullptr_t /*rhs*/);

    protected:
        FunctionWrapperBase* getWrapper() const;

        void clear();

    private:
        FunctionWrapperBase* pWrapper_;
    };
}
}

#endif
