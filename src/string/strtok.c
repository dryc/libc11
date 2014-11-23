/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, strtok() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strtok.html
 */
char*
strtok(char* restrict s1,
       const char* restrict s2) {

  return (void)s1, (void)s2, NULL; // TODO
}
