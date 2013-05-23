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
 * Null pointer constant.
 */
#define NULL ((void*)0)

#endif /* _STDDEF_H */
