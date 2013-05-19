/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>

int
sprintf(char* restrict str,
        const char* restrict format, ...) {
  return (void)str, (void)format, -1; // TODO
}
