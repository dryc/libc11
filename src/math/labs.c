/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/**
 * @date   2017-10-22
 * @author Marcus Johnson
 * @see    http://libc11.org/math/labs.html
 */

long int labs(long int j) {
    return j >= 0 ? j : ~j + 1;
}
