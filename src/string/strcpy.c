/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, strcpy() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @auther Syed Nasim
 * @see    http://libc11.org/string/strcpy.html
 */
char*
strcpy(char* restrict s1,
       const char* restrict s2) {

  char * rc = s1;
  while (( *s1++ = *s2++ ));
  return rc;
}
