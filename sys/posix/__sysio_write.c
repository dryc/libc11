/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for FILE */

#include "syscall.h"
#include "sysio.h"
#include "sysio_file.h"

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio.html
 */
long
__sysio_write(FILE* const restrict stream,
              const void* const restrict buffer,
              const unsigned long count) {
  return __sys_write(stream->fd, buffer, count); // TODO: buffering
}
