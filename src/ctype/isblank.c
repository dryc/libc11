/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
isblank(const int c) {
  return c == ' ' || c == '\t'; /* in the "C" locale */
}
