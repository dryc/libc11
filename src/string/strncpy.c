/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, size_t, strncpy() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @auther Syed Nasim
 * @see    http://libc11.org/string/strncpy.html
 */
char*
strncpy(char* restrict s1,
        const char* restrict s2,
        size_t n) {

  char * rc = s1;
  while ( ( n > 0 ) && ( *s1++ = *s2++ ) )
  {
     --n;
  }
  while ( n-- > 1 )
  {
     *s1++ = '\0';
  }
  return rc;
}
