/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-02
 * @author Samuel Sarle
 * @see    http://libc11.org/math/fmod.html
 */

double
fmod(double x, const double y) {
  if (x > y && x > 0 && y > 0) {
    while (x >= y) {
      x -= y;
    }
    return x;
  }
  return 0;
}
