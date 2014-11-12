/* This is free and unencumbered software released into the public domain. */

#ifndef _STDDEF_H
#define _STDDEF_H

/**
 * @file
 *
 * <stddef.h> - C11 7.19: Common definitions.
 *
 * @see http://libc11.org/stddef/
 */

/**
 * The signed integer type of the result of subtracting two pointers.
 */
typedef signed long ptrdiff_t;

/**
 * The unsigned integer type of the result of the `sizeof` operator.
 */
typedef unsigned long size_t;

/**
 * An object type whose alignment is as great as is supported by the
 * implementation in all contexts.
 */
typedef struct { long long __ll; long double __ld; } max_align_t;

/**
 * An integer type whose range of values can represent distinct codes for
 * all members of the largest extended character set specified among the
 * supported locales.
 */
typedef int wchar_t;

/**
 * Null pointer constant.
 */
#define NULL ((void*)0)

/**
 * The offset in bytes to the structure member from the beginning of its
 * structure.
 */
#define offsetof(type, member) __builtin_offsetof(type, member)

#endif /* _STDDEF_H */
