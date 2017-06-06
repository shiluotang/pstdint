#ifndef PSTDINT_H_INCLUDED
#define PSTDINT_H_INCLUDED

#include <limits.h>

#if !defined(UINT8_MAX) && defined(UCHAR_MAX) && (UCHAR_MAX) == 0xffU
    typedef unsigned char   uint8_t;
    typedef signed char     int8_t;
#   define UINT8_MAX UCHAR_MAX
#   define INT8_MAX CHAR_MAX
#   define INT8_MIN CHAR_MIN
#endif
#if !defined(UINT8_MAX) && defined(USHRT_MAX) && (USHRT_MAX) == 0xffU
    typedef unsigned short  uint8_t;
    typedef signed short    int8_t;
#   define UINT8_MAX USHRT_MAX
#   define INT8_MAX SHRT_MAX
#   define INT8_MIN SHRT_MIN
#endif
#if !defined(UINT16_MAX) && defined(UINT_MAX) && (UINT_MAX) == 0xffffUL
    typedef unsigned int    uint16_t;
    typedef signed int      int16_t;
#   define UINT16_MAX   UINT_MAX
#   define INT16_MAX    INT_MAX
#   define INT16_MIN    INT_MIN
#endif
#if !defined(UINT16_MAX) && defined(USHRT_MAX) && (USHRT_MAX) == 0xffffU
    typedef unsigned short  uint16_t;
    typedef signed short    int16_t;
#   define UINT16_MAX   USHRT_MAX
#   define INT16_MAX    SHRT_MAX
#   define INT16_MIN    SHRT_MIN
#endif
#if !defined(UINT32_MAX) && defined(UINT_MAX) && (UINT_MAX) == 0xffffffffUL
    typedef unsigned int    uint32_t;
    typedef signed int      int32_t;
#   define UINT32_MAX   UINT_MAX
#   define INT32_MAX    INT_MAX
#   define INT32_MIN    INT_MIN
#endif
#if !defined(UINT32_MAX) && defined(ULONG_MAX) && (ULONG_MAX) == 0xffffffffUL
    typedef unsigned long   uint32_t;
    typedef signed long     int32_t;
#   define UINT32_MAX   ULONG_MAX
#   define INT32_MAX    LONG_MAX
#   define INT32_MIN    LONG_MIN
#endif
#if !defined(UINT64_MAX) && defined(ULONG_MAX) && (ULONG_MAX) == 0xffffffffffffffffULL
    typedef unsigned long   uint64_t;
    typedef signed long     int64_t;
#   define UINT64_MAX   ULONG_MAX
#   define INT64_MAX    LONG_MAX
#   define INT64_MIN    LONG_MIN
#endif
#if !defined(UINT64_MAX) && defined(ULONG_MAX) && (ULLONG_MAX) == 0xffffffffffffffffULL
    typedef unsigned long long  uint64_t;
    typedef signed long long    int64_t;
#   define UINT64_MAX   ULLONG_MAX
#   define INT64_MAX    LLONG_MAX
#   define INT64_MIN    LLONG_MIN
#endif
/*
 * Check the non-standard macro ULONG_LONG_MAX
 */
#if !defined(UINT64_MAX) && defined(ULONG_LONG_MAX) && (ULONG_LONG_MAX) == 0xffffffffffffffffULL
    typedef unsigned long long  uint64_t;
    typedef signed long long    int64_t;
#   define UINT64_MAX   ULONG_LONG_MAX
#   define INT64_MAX    LONG_LONG_MAX
#   define INT64_MIN    LONG_LONG_MIN
#endif

#endif /* PSTDINT_H_INCLUDED */

