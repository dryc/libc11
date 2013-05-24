/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 */
void*
memchr(const void* s,
       int c,
       size_t n) {
  return (void)s, (void)c, (void)n, NULL; // TODO
}
