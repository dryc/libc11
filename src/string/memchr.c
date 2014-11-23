/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, size_t, memchr() */

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/string/memchr.html
 */
void*
memchr(const void* s,
       int c,
       size_t n) {

  return (void)s, (void)c, (void)n, NULL; // TODO
}
