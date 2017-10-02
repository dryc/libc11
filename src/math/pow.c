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
    for (int i=0; i<y; i++)
        z *= x;
    return z;
}

