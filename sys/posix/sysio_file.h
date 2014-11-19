/* This is free and unencumbered software released into the public domain. */

#ifndef _SYSIO_FILE_H
#define _SYSIO_FILE_H

/**
 * @file
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The non-public internals of FILE objects.
 */
struct __sysio_FILE {
  int fd;
  int error;
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _SYSIO_FILE_H */
