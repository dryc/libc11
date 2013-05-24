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
snprintf(char* const restrict str,
         const size_t size,
         const char* const restrict format,
         ...) {
  va_list ap;
  va_start(ap, format);
  const int result = vsnprintf(str, size, format, ap);
  va_end(ap);
  return result;
}
