/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>

/**
 * @date   2013-05-25
 * @author Arto Bendiken
 * @see    http://libc11.org/stdlib/_Exit.html
 */
void
_Exit(const int status) {
  (void)status; // TODO
}
