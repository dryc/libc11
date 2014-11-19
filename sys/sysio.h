/* This is free and unencumbered software released into the public domain. */

#ifndef _SYSIO_H
#define _SYSIO_H

/**
 * @file
 *
 * System I/O interface for libc11.
 */

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @param stream the stream to close
 * @return zero on success, or `-errno` on error
 */
int __sysio_close(FILE* stream);

/**
 * @param stream the stream to access
 * @return a pointer to the stream's error number
 */
int* __sysio_errno(FILE* stream);

/**
 * @param stream the output stream
 * @param buffer the data buffer
 * @param count the byte count
 * @return the number of bytes written, or `-errno`
 */
long __sysio_write(
  FILE* restrict stream,
  const void* restrict buffer,
  unsigned long count);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _SYSIO_H */
