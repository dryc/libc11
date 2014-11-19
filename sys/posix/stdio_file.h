/* This is free and unencumbered software released into the public domain. */

#ifndef _STDIO_FILE_H
#define _STDIO_FILE_H

/**
 * @file
 */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The non-public internals of FILE objects.
 */
struct __sys_FILE {
  int fd;
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STDIO_FILE_H */
