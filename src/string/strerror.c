/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <errno.h>  /* for E* */
#include <string.h> /* for NULL, strerror() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strerror.html
 */
char*
strerror(int errnum) {
  switch (errnum) {
    case EDOM:   return "Numerical argument out of domain";
    case EILSEQ: return "Illegal byte sequence";
    case ERANGE: return "Result too large";
    default:     return "Unknown error";
  }
}
