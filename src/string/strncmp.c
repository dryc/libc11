/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for size_t, strncmp() */

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @auther Syed Nasim
 * @see    http://libc11.org/string/strncmp.html
 */
int
strncmp(const char* const s1,
        const char* const s2,
        const size_t n) {

  while ( *s1 && n && ( *s1 == *s2 ) )
  {
      ++s1;
      ++s2;
      --n;
  }
  if ( ( n == 0 ) )
  {
      return 0;
  }
  else
  {
      return ( *(uint8_t *)s1 - *(uint8_t *)s2 );
  }
}
