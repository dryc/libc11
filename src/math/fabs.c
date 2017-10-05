/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-03
 * @author Samuel Sarle
 * @see    http://libc11.org/math/fabs.html
 */

double
fabs(const double x) {
  return (x < 0) ? -x : x;
}
