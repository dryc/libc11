/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
tolower(const int c) {
  return isupper(c) ? 'a' + (c - 'A') : c; /* in the "C" locale */
}
