/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for NULL, size_t, memmove() */

/**
 * @date   2013-05-24
 * @author Arto Bendiken
 * @auther Syed Nasim
 * @see    http://libc11.org/string/memmove.html
 */
void*
memmove(void* s1,
        const void* s2,
        size_t n) {

  char * dest = (char *) s1;
  const char * src = (const char *) s2;
  if ( dest <= src )
  {
      while ( n-- )
      {
          *dest++ = *src++;
      }
  }
  else
  {
      src += n;
      dest += n;
      while ( n-- )
      {
          *--dest = *--src;
      }
  }
  return s1;
}
