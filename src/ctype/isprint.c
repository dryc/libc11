/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
isprint(const int c) {
  return c >= 0x20 && c <= 0x7E; /* in the "C" locale */
}
