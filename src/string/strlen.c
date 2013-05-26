/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

/**
 * @date   2013-05-26
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strlen.html
 */
size_t
strlen(const char* const s) {
  return (void)s, 0; // TODO
}
