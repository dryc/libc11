/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h> /* for stdin */
#include "stdio_file.h"

/**
 * @date   2014-11-19
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/stdin.html
 */
static FILE __sys_stdin = {
  .fd = 0,
};

FILE* const stdin = &__sys_stdin;
