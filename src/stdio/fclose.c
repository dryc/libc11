/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE, fclose(), fflush() */

#include "sysio.h" /* for __sysio_*() */

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/fclose.html
 */
int
fclose(FILE* const stream) {

  return __sysio_close(stream);
}
