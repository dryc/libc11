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
        int c) {

  return (void)s, (void)c, NULL; // TODO
}
