/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-01
 * @author Samuel Sarle
 * @see    http://libc11.org/math/pow.html
 */

double
pow(const double x, const double y) {
  double z = 1;
  if (y > 0) {
    for (unsigned long long i = 0; i < y; i++) {
      z *= x;
    }
  }
  if (y < 0 && x != 0) {
    for (long long i = 0; i > y; i--) {
      z /= x;
    }
  }
  return z;

}
