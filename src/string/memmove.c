/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/string/memmove.html
 */
void*
memmove(void* s1,
        const void* s2,
        size_t n) {
  return (void)s1, (void)s2, (void)n, NULL; // TODO
}
