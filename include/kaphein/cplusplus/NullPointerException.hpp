#ifndef KAPHEIN_NULLPOINTEREXCEPTION_HPP
#define KAPHEIN_NULLPOINTEREXCEPTION_HPP

#include "kaphein/cplusplus/pp/basic.hpp"
#include "Exception.hpp"

namespace kaphein
{
    class NullPointerException
        : public Exception
    {
    public:
        virtual ~NullPointerException();
    };
}

#endif
