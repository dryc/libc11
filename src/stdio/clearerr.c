/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE, clearerr() */

#include "sysio.h" /* for __sysio_*() */

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/clearerr.html
 */
void
clearerr(FILE* const stream) {

  *__sysio_errno(stream) = 0;
}
