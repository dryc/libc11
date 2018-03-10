/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-04
 * @author Samuel Sarle
 * @see    http://libc11.org/math/ldexp.html
 */

#include <math.h>     //For pow()

double
ldexp(const double x, const long long y) {
  return x * pow(2, y);
}
