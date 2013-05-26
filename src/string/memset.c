/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/string/memset.html
 */
void*
memset(void* const s,
       const int c,
       size_t n) {
  const unsigned char b = (unsigned char)c;

  unsigned char* p = (unsigned char*)s;
  while (n--) {
    *p++ = b;
  }

  return s;
}
