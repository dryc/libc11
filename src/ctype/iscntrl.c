/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
iscntrl(const int c) {
  return (unsigned int)c < 0x20 || c == 0x7F; /* in the "C" locale */
}
