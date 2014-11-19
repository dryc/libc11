/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for stdout */
#include "stdio_file.h"

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/stdout.html
 */
static FILE __sys_stdout = {
  .fd = 1,
};

FILE* const stdout = &__sys_stdout;
