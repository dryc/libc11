/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/ctype/isupper.html
 */
int
isupper(const int c) {
  return c >= 'A' && c <= 'Z'; /* in the "C" locale */
}
