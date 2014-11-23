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
 * C11 7.24.3.1
 */
char* strcat(char* restrict s1, const char* restrict s2);

/**
 * C11 7.24.5.2
 */
char* strchr(const char* s, int c);

/**
 * C11 7.24.4.2
 */
int strcmp(const char* s1, const char* s2);

/**
 * C11 7.24.4.3
 */
int strcoll(const char* s1, const char* s2);

/**
 * C11 7.24.2.3
 */
char* strcpy(char* restrict s1, const char* restrict s2);

/**
 * C11 7.24.5.3
 */
size_t strcspn(const char* s1, const char* s2);

/**
 * C11 7.24.6.2
 */
char* strerror(int errnum);

/**
 * C11 7.24.6.3
 */
size_t strlen(const char* s);

/**
 * C11 7.24.3.2
 */
char* strncat(char* restrict s1, const char* restrict s2, size_t n);

/**
 * C11 7.24.4.4
 */
int strncmp(const char* s1, const char* s2, size_t n);

/**
 * C11 7.24.2.4
 */
char* strncpy(char* restrict s1, const char* restrict s2, size_t n);

#if defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809L
/**
 * POSIX.1-2008
 */
size_t strnlen(const char* s, size_t maxlen);
#endif

/**
 * C11 7.24.5.4
 */
char* strpbrk(const char* s1, const char* s2);

/**
 * C11 7.24.5.5
 */
char* strrchr(const char* s, int c);

/**
 * C11 7.24.5.6
 */
size_t strspn(const char* s1, const char* s2);

/**
 * C11 7.24.5.7
 */
char* strstr(const char* s1, const char* s2);

/**
 * C11 7.24.5.8
 */
char* strtok(char* restrict s1, const char* restrict s2);

/**
 * C11 7.24.4.5
 */
size_t strxfrm(char* restrict s1, const char* restrict s2, size_t n);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STRING_H */
