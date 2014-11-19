/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <errno.h>   /* for errno */
#include <stdio.h>   /* for fputs() */
#include <string.h>  /* for strlen() */

#include "sysio.h"   /* for __sysio_*() */

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/fputs.html
 */
int
fputs(const char* const restrict str,
      FILE* const restrict stream) {

  const long rc = __sysio_write(stream, str, strlen(str));
  if (rc < 0) {
    errno = -((int)rc);
    return EOF;
  }

  return 0; /* a nonnegative return value indicates success */
}
