/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for EOF, stdout, fputc(), fputs(), puts() */

/**
 * @date   2014-11-14
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/puts.html
 */
int
puts(const char* const str) {
  if (fputs(str, stdout) == EOF) {
    return EOF;
  }

  if (fputc('\n', stdout) == EOF) {
    return EOF;
  }

  return 0; /* a nonnegative return value indicates success */
}
