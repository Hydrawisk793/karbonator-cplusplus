#ifndef KAPHEIN_FUNCTIONAL_DELEGATE_HPP
#define KAPHEIN_FUNCTIONAL_DELEGATE_HPP

#include "../pp/basic.hpp"
#include "../NullPointerException.hpp"
#include "../collection/Vector.hpp"
#include "FreeFunctionWrapper.hpp"
#include "MethodWrapper.hpp"

//Delegate(
//    const Delegate<
//        R
//        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__)
//        , Alloc
//    >& rhs
//)
//    : wrappers_()
//{}

//Delegate(
//    Delegate<
//        R
//        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__)
//        , Alloc
//    >&& rhs
//)
//    : wrappers_()
//{}

//Delegate<
//    R
//    KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__)
//    , Alloc
//>& operator =(
//    const Delegate<
//        R
//        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__)
//        , Alloc
//    >& rhs
//);

//Delegate<
//    R
//    KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__)
//    , Alloc
//>& operator =(
//    Delegate<
//        R
//        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__)
//        , Alloc
//    >&& rhs
//);

namespace kaphein
{
    namespace functional
    {
    #define KAPHEIN_xx_DECLARE_CLASS_BODY(...) \
        public: \
            Delegate() \
                : wrappers_() \
            {} \
             \
            virtual ~Delegate() \
            { \
                clear(); \
            } \
             \
            Delegate< \
                R \
                KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
            >& operator =(std::nullptr_t /*rhs*/) \
            { \
                clear(); \
                 \
                return *this; \
            } \
             \
        public: \
            Delegate< \
                R \
                KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
            >& bind( \
                typename FreeFunctionWrapper< \
                    R \
                    KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
                >::FreeFunctionPtrType pFreeFunc \
            ) \
            { \
                wrappers_.pushBack( \
                    new FreeFunctionWrapper< \
                        R \
                        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
                    >(pFreeFunc) \
                ); \
                 \
                return *this; \
            } \
             \
            template <typename E> \
            Delegate< \
                R \
                KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
            >& bind( \
                E& obj \
                , typename MethodWrapper< \
                    E \
                    , R \
                    KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
                >::MethodPtrType pMethod \
            ) \
            { \
                wrappers_.pushBack( \
                    new MethodWrapper< \
                        E \
                        , R \
                        KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
                    >(obj, pMethod) \
                ); \
                 \
                return *this; \
            } \
             \
            Delegate< \
                R \
                KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
            >& clear() \
            { \
                const auto endIter = std::end(wrappers_); \
                for( \
                    auto iter = std::begin(wrappers_); \
                    iter != endIter; \
                    ++iter \
                ) \
                { \
                    delete (*iter); \
                } \
                wrappers_.clear(); \
                 \
                return *this; \
            } \
             \
            R operator ()( \
                KAPHEIN_x_MAKE_ARGUMENT_LIST(__VA_ARGS__) \
            ) const \
            { \
                if((*this) == nullptr) { \
                    throw NullPointerException(); \
                } \
                 \
                const auto endIter = std::end(wrappers_); \
                auto iter = std::begin(wrappers_); \
                auto nextIter = iter; \
                ++nextIter; \
                for(; ; ) { \
                    if(nextIter == endIter) { \
                        return (*(*iter))( \
                            KAPHEIN_x_MAKE_ARGVAR_LIST(__VA_ARGS__) \
                        ); \
                    } \
                    else { \
                        (*(*iter))( \
                            KAPHEIN_x_MAKE_ARGVAR_LIST(__VA_ARGS__) \
                        ); \
                         \
                        ++iter; \
                        ++nextIter; \
                    } \
                } \
            } \
             \
        public: \
            bool operator ==(std::nullptr_t /*rhs*/) const \
            { \
                return wrappers_.isEmpty(); \
            } \
             \
            bool operator !=(std::nullptr_t rhs) const \
            { \
                return !(*this == rhs); \
            } \
             \
        private: \
            collection::Vector< \
                FunctionWrapper< \
                    R \
                    KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
                >* \
            > wrappers_;

    #define KAPHEIN_xx_DECLARE_CLASS(...) \
        /** \
         *  @brief  \
         *  @date 2017-04-10 \
         */ \
        template < \
            typename R \
            KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST(__VA_ARGS__) \
        > \
        class Delegate< \
            R \
            KAPHEIN_x_MAKE_OPTIONAL_LIST(__VA_ARGS__) \
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
        , typename A5 = Dummy
        , typename A6 = Dummy
        , typename A7 = Dummy
        , typename A8 = Dummy
        , typename A9 = Dummy
        , typename A10 = Dummy
        , typename A11 = Dummy
        , typename A12 = Dummy
        , typename A13 = Dummy
        , typename A14 = Dummy
        , typename A15 = Dummy
        , typename A16 = Dummy
    >
    class Delegate
    {
        KAPHEIN_xx_DECLARE_CLASS_BODY(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16)
    };

    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8, A9)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7, A8)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6, A7)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5, A6)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4, A5)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3, A4)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2, A3)
    KAPHEIN_xx_DECLARE_CLASS(A1, A2)
    KAPHEIN_xx_DECLARE_CLASS(A1)
    KAPHEIN_xx_DECLARE_CLASS()

    #undef KAPHEIN_xx_DECLARE_CLASS
    #undef KAPHEIN_xx_DECLARE_CLASS_BODY
    }
}

#endif
