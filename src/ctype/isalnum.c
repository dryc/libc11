/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
isalnum(const int c) {
  return isalpha(c) || isdigit(c);
}
