/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, strstr() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strstr.html
 */
char*
strstr(const char* s1,
       const char* s2) {

  return (void)s1, (void)s2, NULL; // TODO
}
