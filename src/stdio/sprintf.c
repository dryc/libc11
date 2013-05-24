/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 */
int
sprintf(char* const restrict str,
        const char* const restrict format,
        ...) {
  va_list ap;
  va_start(ap, format);
  const int result = vsprintf(str, format, ap);
  va_end(ap);
  return result;
}
