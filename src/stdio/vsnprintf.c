/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>

#include <stdarg.h> /* for va_*() */

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 */
int
vsnprintf(char* restrict str,
          size_t size,
          const char* restrict format,
          va_list ap) {
  return (void)str, (void)size, (void)format, (void)ap, -1; // TODO
}
