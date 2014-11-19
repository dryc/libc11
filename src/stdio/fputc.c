/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for EOF, fputc(), fputs() */

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/fputc.html
 */
int
fputc(const int chr,
      FILE* const stream) {

  const char buffer[2] = {(char)chr, '\0'};

  return (fputs(buffer, stream) != EOF) ? chr : EOF;
}
