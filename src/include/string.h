/* This is free and unencumbered software released into the public domain. */

#ifndef _STRING_H
#define _STRING_H

/**
 * @file
 *
 * <string.h> - String handling.
 *
 * @see http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/string.h.html
 */

#include <stddef.h> /* for NULL and size_t */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * C11 7.24.5.1
 */
void* memchr(const void* s, int c, size_t n);

/**
 * C11 7.24.4.1
 */
int memcmp(const void* s1, const void* s2, size_t n);

/**
 * C11 7.24.2.1
 */
void* memcpy(void* restrict s1, const void* restrict s2, size_t n);

/**
 * C11 7.24.2.2
 */
void* memmove(void* s1, const void* s2, size_t n);

/**
 * C11 7.24.6.1
 */
void* memset(void* s, int c, size_t n);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STRING_H */
