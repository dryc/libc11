/* This is free and unencumbered software released into the public domain. */

#ifndef _SYSCALL_H
#define _SYSCALL_H

/**
 * @file
 *
 * System call interface for libc11.
 */

#include <stdnoreturn.h> /* for _Noreturn */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @param status the exit code
 */
_Noreturn void __sys_exit(int status);

/**
 * @param fd the output file descriptor
 * @param buffer the data buffer
 * @param count the byte count
 * @return the number of bytes written, or `-errno`
 */
long __sys_write(int fd, const void* buffer, unsigned long count);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _SYSCALL_H */
