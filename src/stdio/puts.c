/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <errno.h>   /* for errno */
#include <stdio.h>   /* for puts() */
#include <string.h>  /* for strlen() */

#include "syscall.h" /* for __sys_*() */

/**
 * @date   2014-11-14
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/puts.html
 */
int
puts(const char* str) {
  // TODO: reimplement this to be based on fputs() and fputc().
  long rc;

  rc = __sys_write(1 /*stdout*/, str, strlen(str));
  if (rc < 0) {
    errno = -rc;
    return EOF;
  }

  rc = __sys_write(1 /*stdout*/, "\n", 1);
  if (rc < 0) {
    errno = -rc;
    return EOF;
  }

  return 0; /* a nonnegative return value indicates success */
}
