/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 */
int
isascii(const int c) {
  return c >= 0 && c <= 0x7F; /* 7-bit ASCII */
}
