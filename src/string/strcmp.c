/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 */
int
strcmp(const char* const s1,
       const char* const s2) {
  const unsigned char* p1 = (unsigned char*)s1;
  const unsigned char* p2 = (unsigned char*)s2;

  while (*p1 != '\0' && *p1 == *p2) {
    p1++, p2++;
  }

  return *p1 - *p2;
}
