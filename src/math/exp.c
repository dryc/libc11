/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-09
 * @author Samuel Sarle
 * @see    http://libc11.org/math/exp.html
 */

double
exp(double x) {
  x =  1 + (x / 1048576);
  for (int i = 0; i < 20; i++) {
    x *= x;
  }
}
