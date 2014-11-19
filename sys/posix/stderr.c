/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for stderr */

#include "sysio_file.h"

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/stderr.html
 */
static FILE __sysio_stderr = {
  .fd = 2,
};

FILE* const stderr = &__sysio_stderr;
