/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
islower(const int c) {
  return c >= 'a' && c <= 'z'; /* in the "C" locale */
}
