/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/ctype/isalpha.html
 */
int
isalpha(const int c) {
  return isupper(c) || islower(c); /* in the "C" locale */
}
