/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
toupper(const int c) {
  return islower(c) ? 'A' + (c - 'a') : c; /* in the "C" locale */
}
