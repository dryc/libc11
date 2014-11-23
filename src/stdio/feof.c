/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE, feof() */

#include "sysio.h" /* for __sysio_*() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/feof.html
 */
int
feof(FILE* const stream) {

  return *__sysio_errno(stream); // FIXME
}
