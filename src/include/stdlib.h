/* This is free and unencumbered software released into the public domain. */

#ifndef _STDLIB_H
#define _STDLIB_H

/**
 * @file
 *
 * <stdlib.h> - C11 7.22: General utilities.
 *
 * @see http://libc11.org/stdlib/
 */

#include <stdnoreturn.h> /* for _Noreturn */

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#ifdef __cplusplus
extern "C" {
#endif

/**
 * C11 7.22.4.5
 */
_Noreturn void _Exit(int status);

/**
 * C11 7.22.4.1
 */
_Noreturn void abort(void);

/**
 * C11 7.22.6.1
 */
int abs(int j);

/**
 * C11 7.22.4.4
 */
_Noreturn void exit(int status);

/**
 * C11 7.22.6.1
 */
long int labs(long int j);

/**
 * C11 7.22.6.1
 */
long long int llabs(long long int j);

/**
 * C11 7.22.4.7
 */
_Noreturn void quick_exit(int status);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STDLIB_H */
