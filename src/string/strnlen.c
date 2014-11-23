/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for size_t, strnlen() */

/**
 * @date   2013-05-26
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strnlen.html
 */
size_t
strnlen(const char* const s,
        const size_t maxlen) {

  return (void)s, (void)maxlen, 0; // TODO
}
