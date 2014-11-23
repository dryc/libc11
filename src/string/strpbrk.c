/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, strchr(), strpbrk() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strpbrk.html
 */
char*
strpbrk(const char* s1,
        const char* const s2) {

  while (*s1 != '\0' && strchr(s2, *s1) == NULL) {
    s1++;
  }

  return (*s1 != '\0') ? (char*)s1 : NULL;
}
