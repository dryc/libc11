/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE */

#include "sysio.h"
#include "sysio_file.h"

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio.html
 */
int*
__sysio_errno(FILE* const stream) {
  return &(stream->error);
}
