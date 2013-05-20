/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
isdigit(const int c) {
  return c >= '0' && c <= '9';
}
