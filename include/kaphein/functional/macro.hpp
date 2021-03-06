#ifndef KAPHEIN_FUNCTIONAL_MACRO_HPP
#define KAPHEIN_FUNCTIONAL_MACRO_HPP

#include "../pp/basic.hpp"

#define KAPHEIN_x_MAKE_LIST_0()
#define KAPHEIN_x_MAKE_LIST_1(_1) \
    _1
#define KAPHEIN_x_MAKE_LIST_2(_1, _2) \
    KAPHEIN_x_MAKE_LIST_1(_1) \
    , _2
#define KAPHEIN_x_MAKE_LIST_3(_1, _2, _3) \
    KAPHEIN_x_MAKE_LIST_2(_1, _2) \
    , _3
#define KAPHEIN_x_MAKE_LIST_4(_1, _2, _3, _4) \
    KAPHEIN_x_MAKE_LIST_3(_1, _2, _3) \
    , _4
#define KAPHEIN_x_MAKE_LIST_5(_1, _2, _3, _4, _5) \
    KAPHEIN_x_MAKE_LIST_4(_1, _2, _3, _4) \
    , _5
#define KAPHEIN_x_MAKE_LIST_6(_1, _2, _3, _4, _5, _6) \
    KAPHEIN_x_MAKE_LIST_5(_1, _2, _3, _4, _5) \
    , _6
#define KAPHEIN_x_MAKE_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    KAPHEIN_x_MAKE_LIST_6(_1, _2, _3, _4, _5, _6) \
    , _7
#define KAPHEIN_x_MAKE_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    KAPHEIN_x_MAKE_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    , _8
#define KAPHEIN_x_MAKE_LIST___(count, ...) \
    KAPHEIN_x_EXPAND( \
        KAPHEIN_x_MAKE_LIST_ ## count (__VA_ARGS__) \
    )
#define KAPHEIN_x_MAKE_LIST__(count, ...) \
    KAPHEIN_x_MAKE_LIST___(count, __VA_ARGS__)
#define KAPHEIN_x_MAKE_LIST(...) \
    KAPHEIN_x_MAKE_LIST__( \
        KAPHEIN_PP_GET_ARGUMENT_COUNT(__VA_ARGS__) \
        , __VA_ARGS__ \
    )

#define KAPHEIN_x_MAKE_OPTIONAL_LIST_0()
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_1(_1) \
    , _1
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_2(_1, _2) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_1(_1) \
    , _2
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_3(_1, _2, _3) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_2(_1, _2) \
    , _3
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_4(_1, _2, _3, _4) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_3(_1, _2, _3) \
    , _4
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_5(_1, _2, _3, _4, _5) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_4(_1, _2, _3, _4) \
    , _5
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_6(_1, _2, _3, _4, _5, _6) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_5(_1, _2, _3, _4, _5) \
    , _6
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_6(_1, _2, _3, _4, _5, _6) \
    , _7
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    , _8
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    , _9
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    , _10
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    , _11
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    , _12
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    , _13
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    , _14
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    , _15
#define KAPHEIN_x_MAKE_OPTIONAL_LIST_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    , _16
#define KAPHEIN_x_MAKE_OPTIONAL_LIST___(count, ...) \
    KAPHEIN_x_EXPAND( \
        KAPHEIN_x_MAKE_OPTIONAL_LIST_ ## count (__VA_ARGS__) \
    )
#define KAPHEIN_x_MAKE_OPTIONAL_LIST__(count, ...) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST___(count, __VA_ARGS__)
#define KAPHEIN_x_MAKE_OPTIONAL_LIST(...) \
    KAPHEIN_x_MAKE_OPTIONAL_LIST__( \
        KAPHEIN_PP_GET_ARGUMENT_COUNT(__VA_ARGS__) \
        , __VA_ARGS__ \
    )

#define KAPHEIN_x_MAKE_TYPENAME_LIST_0(dummy)
#define KAPHEIN_x_MAKE_TYPENAME_LIST_1(_1) \
    typename _1
#define KAPHEIN_x_MAKE_TYPENAME_LIST_2(_1, _2) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_1(_1) \
    , typename _2
#define KAPHEIN_x_MAKE_TYPENAME_LIST_3(_1, _2, _3) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_2(_1, _2) \
    , typename _3
#define KAPHEIN_x_MAKE_TYPENAME_LIST_4(_1, _2, _3, _4) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_3(_1, _2, _3) \
    , typename _4
#define KAPHEIN_x_MAKE_TYPENAME_LIST_5(_1, _2, _3, _4, _5) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_4(_1, _2, _3, _4) \
    , typename _5
#define KAPHEIN_x_MAKE_TYPENAME_LIST_6(_1, _2, _3, _4, _5, _6) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_5(_1, _2, _3, _4, _5) \
    , typename _6
#define KAPHEIN_x_MAKE_TYPENAME_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_6(_1, _2, _3, _4, _5, _6) \
    , typename _7
#define KAPHEIN_x_MAKE_TYPENAME_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    KAPHEIN_x_MAKE_TYPENAME_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    , typename _8
#define KAPHEIN_x_MAKE_TYPENAME_LIST___(count, ...) \
    KAPHEIN_x_EXPAND( \
        KAPHEIN_x_MAKE_TYPENAME_LIST_ ## count (__VA_ARGS__) \
    )
#define KAPHEIN_x_MAKE_TYPENAME_LIST__(count, ...) \
    KAPHEIN_x_MAKE_TYPENAME_LIST___(count, __VA_ARGS__)
#define KAPHEIN_x_MAKE_TYPENAME_LIST(...) \
    KAPHEIN_x_MAKE_TYPENAME_LIST__( \
        KAPHEIN_PP_GET_ARGUMENT_COUNT(__VA_ARGS__) \
        , __VA_ARGS__ \
    )
    
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_0()
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_1(_1) \
    , typename _1
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_2(_1, _2) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_1(_1) \
    , typename _2
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_3(_1, _2, _3) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_2(_1, _2) \
    , typename _3
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_4(_1, _2, _3, _4) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_3(_1, _2, _3) \
    , typename _4
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_5(_1, _2, _3, _4, _5) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_4(_1, _2, _3, _4) \
    , typename _5
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_6(_1, _2, _3, _4, _5, _6) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_5(_1, _2, _3, _4, _5) \
    , typename _6
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_6(_1, _2, _3, _4, _5, _6) \
    , typename _7
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    , typename _8
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    , typename _9
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    , typename _10
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    , typename _11
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    , typename _12
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    , typename _13
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    , typename _14
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    , typename _15
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    , typename _16
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST___(count, ...) \
    KAPHEIN_x_EXPAND( \
        KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST_ ## count (__VA_ARGS__) \
    )
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST__(count, ...) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST___(count, __VA_ARGS__)
#define KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST(...) \
    KAPHEIN_x_MAKE_OPTIONAL_TYPENAME_LIST__( \
        KAPHEIN_PP_GET_ARGUMENT_COUNT(__VA_ARGS__) \
        , __VA_ARGS__ \
    )

#define KAPHEIN_x_MAKE_ARGVAR_LIST_0()
#define KAPHEIN_x_MAKE_ARGVAR_LIST_1(_1) \
    a1
#define KAPHEIN_x_MAKE_ARGVAR_LIST_2(_1, _2) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_1(_1) \
    , a2
#define KAPHEIN_x_MAKE_ARGVAR_LIST_3(_1, _2, _3) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_2(_1, _2) \
    , a3
#define KAPHEIN_x_MAKE_ARGVAR_LIST_4(_1, _2, _3, _4) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_3(_1, _2, _3) \
    , a4
#define KAPHEIN_x_MAKE_ARGVAR_LIST_5(_1, _2, _3, _4, _5) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_4(_1, _2, _3, _4) \
    , a5
#define KAPHEIN_x_MAKE_ARGVAR_LIST_6(_1, _2, _3, _4, _5, _6) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_5(_1, _2, _3, _4, _5) \
    , a6
#define KAPHEIN_x_MAKE_ARGVAR_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_6(_1, _2, _3, _4, _5, _6) \
    , a7
#define KAPHEIN_x_MAKE_ARGVAR_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    , a8
#define KAPHEIN_x_MAKE_ARGVAR_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    , a9
#define KAPHEIN_x_MAKE_ARGVAR_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    , a10
#define KAPHEIN_x_MAKE_ARGVAR_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    , a11
#define KAPHEIN_x_MAKE_ARGVAR_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    , a12
#define KAPHEIN_x_MAKE_ARGVAR_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    , a13
#define KAPHEIN_x_MAKE_ARGVAR_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    , a14
#define KAPHEIN_x_MAKE_ARGVAR_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    , a15
#define KAPHEIN_x_MAKE_ARGVAR_LIST_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
    KAPHEIN_x_MAKE_ARGVAR_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    , a16
#define KAPHEIN_x_MAKE_ARGVAR_LIST___(count, ...) \
    KAPHEIN_x_EXPAND( \
        KAPHEIN_x_MAKE_ARGVAR_LIST_ ## count (__VA_ARGS__) \
    )
#define KAPHEIN_x_MAKE_ARGVAR_LIST__(count, ...) \
    KAPHEIN_x_MAKE_ARGVAR_LIST___(count, __VA_ARGS__)
#define KAPHEIN_x_MAKE_ARGVAR_LIST(...) \
    KAPHEIN_x_MAKE_ARGVAR_LIST__( \
        KAPHEIN_PP_GET_ARGUMENT_COUNT(__VA_ARGS__) \
        , __VA_ARGS__ \
    )

#define KAPHEIN_x_MAKE_ARGUMENT_LIST_0()
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_1(_1) \
    _1 a1
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_2(_1, _2) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_1(_1) \
    , _2 a2
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_3(_1, _2, _3) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_2(_1, _2) \
    , _3 a3
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_4(_1, _2, _3, _4) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_3(_1, _2, _3) \
    , _4 a4
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_5(_1, _2, _3, _4, _5) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_4(_1, _2, _3, _4) \
    , _5 a5
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_6(_1, _2, _3, _4, _5, _6) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_5(_1, _2, _3, _4, _5) \
    , _6 a6
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_6(_1, _2, _3, _4, _5, _6) \
    , _7 a7
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_7(_1, _2, _3, _4, _5, _6, _7) \
    , _8 a8
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_8(_1, _2, _3, _4, _5, _6, _7, _8) \
    , _9 a9
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_9(_1, _2, _3, _4, _5, _6, _7, _8, _9) \
    , _10 a10
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
    , _11 a11
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
    , _12 a12
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
    , _13 a13
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
    , _14 a14
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
    , _15 a15
#define KAPHEIN_x_MAKE_ARGUMENT_LIST_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
    , _16 a16
#define KAPHEIN_x_MAKE_ARGUMENT_LIST___(count, ...) \
    KAPHEIN_x_EXPAND( \
        KAPHEIN_x_MAKE_ARGUMENT_LIST_ ## count (__VA_ARGS__) \
    )
#define KAPHEIN_x_MAKE_ARGUMENT_LIST__(count, ...) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST___(count, __VA_ARGS__)
#define KAPHEIN_x_MAKE_ARGUMENT_LIST(...) \
    KAPHEIN_x_MAKE_ARGUMENT_LIST__( \
        KAPHEIN_PP_GET_ARGUMENT_COUNT(__VA_ARGS__) \
        , __VA_ARGS__ \
    )

#define KAPHEIN_x_TYPE_NAMES(...) __VA_ARGS__
#define KAPHEIN_x_ARGUMENT_NAMES(...) __VA_ARGS__

#endif
