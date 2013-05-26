/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strncmp.html
 */
int
strncmp(const char* const s1,
        const char* const s2,
        const size_t n) {
  return (void)s1, (void)s2, (void)n, -1; // TODO
}
