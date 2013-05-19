/* This is free and unencumbered software released into the public domain. */

#ifndef _STDDEF_H
#define _STDDEF_H

/**
 * @file
 *
 * <stddef.h> - Common definitions.
 *
 * @see http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stddef.h.html
 */

/**
 * The signed integer type of the result of subtracting two pointers.
 */
typedef signed long ptrdiff_t;

/**
 * The unsigned integer type of the result of the `sizeof` operator.
 */
typedef unsigned long size_t;

#endif /* _STDDEF_H */
