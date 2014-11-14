/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>

/**
 * @date   2014-11-14
 * @author Arto Bendiken
 * @see    http://libc11.org/stdio/puts.html
 */
int
puts(const char* str) {
  return (void)str, EOF; // TODO
}
