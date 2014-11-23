/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for size_t, memcmp() */

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @see    http://libc11.org/string/memcmp.html
 */
int
memcmp(const void* const s1,
       const void* const s2,
       size_t n) {

  const unsigned char* p1 = s1;
  const unsigned char* p2 = s2;

  while (n--) {
    const int r = *p1++ - *p2++;
    if (r) {
      return r;
    }
  }

  return 0; /* s1 is identical to s2 */
}
