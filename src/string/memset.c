/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

void*
memset(void* s,
       int c,
       size_t n) {
  return (void)s, (void)c, (void)n, (void*)0; // TODO
}
