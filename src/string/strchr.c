/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, strchr() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strchr.html
 */
char*
strchr(const char* s,
       const int c) {

  while (*s != '\0' && *s != (char)c) {
    s++;
  }

  return (*s != '\0' || c == '\0') ? (char*)s : NULL;
}
