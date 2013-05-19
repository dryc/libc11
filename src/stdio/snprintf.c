/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>

int
snprintf(char* restrict str,
         size_t size,
         const char* restrict format, ...) {
  return (void)str, (void)size, (void)format, -1; // TODO
}
