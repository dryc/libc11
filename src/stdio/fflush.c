/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE, fflush() */

#include "sysio.h" /* for __sysio_*() */

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/fflush.html
 */
int
fflush(FILE* const stream) {

  (void)stream; /* unused */

  return 0; // TODO: revisit once buffered output is implemented.
}
