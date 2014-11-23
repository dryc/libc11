/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for strcmp(), strcoll() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strcoll.html
 */
int
strcoll(const char* const s1,
        const char* const s2) {

  return strcmp(s1, s2);
}
