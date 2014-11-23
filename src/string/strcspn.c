/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, size_t, strchr(), strcspn() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strcspn.html
 */
size_t
strcspn(const char* s1,
        const char* const s2) {

  size_t result = 0;

  while (*s1 != '\0' && strchr(s2, *s1) == NULL) {
    s1++, result++;
  }

  return result;
}
