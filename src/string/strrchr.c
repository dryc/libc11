/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, strrchr() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strrchr.html
 */
char*
strrchr(const char* s,
        const int c) {

  const char* p = NULL;

  while (*s != '\0') {
    if (*s == (char)c) {
      p = s;
    }
    s++;
  }

  return (char*)p;
}
