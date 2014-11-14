/* This is free and unencumbered software released into the public domain. */

#ifndef _ERRNO_H
#define _ERRNO_H

/**
 * @file
 *
 * <errno.h> - Errors.
 *
 * @see http://libc11.org/errno/
 */

#ifdef __cplusplus
extern "C" {
#endif

#define EDOM   1
#define EILSEQ 2
#define ERANGE 3

extern int errno;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _ERRNO_H */
