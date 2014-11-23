/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE, fgetc(), getc() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/getc.html
 */
int
getc(FILE* const stream) {

  return fgetc(stream);
}
