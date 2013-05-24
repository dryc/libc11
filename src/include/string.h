/* This is free and unencumbered software released into the public domain. */

#ifndef _STRING_H
#define _STRING_H

/**
 * @file
 *
 * <string.h> - String handling.
 *
 * @see http://libc11.org/string/
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

/**
 * C11 7.24.4.2
 */
int strcmp(const char* s1, const char* s2);

/**
 * C11 7.24.4.4
 */
int strncmp(const char* s1, const char* s2, size_t n);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STRING_H */
