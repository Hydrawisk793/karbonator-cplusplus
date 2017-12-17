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
