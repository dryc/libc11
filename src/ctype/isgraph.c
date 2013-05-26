/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/ctype/isgraph.html
 */
int
isgraph(const int c) {
  return c >= 0x21 && c <= 0x7E; /* in the "C" locale */
}
