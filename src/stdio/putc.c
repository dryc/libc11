/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for fputc(), putc() */

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/putc.html
 */
int
putc(const int chr,
     FILE* const stream) {

  return fputc(chr, stream);
}
