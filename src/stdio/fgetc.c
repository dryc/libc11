/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for EOF, FILE, fgetc() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/fgetc.html
 */
int
fgetc(FILE* const stream) {

  return (void)stream, EOF; // TODO
}
