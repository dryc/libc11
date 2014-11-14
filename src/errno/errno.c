/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <errno.h>

/**
 * @date   2014-11-14
 * @author Arto Bendiken
 * @see    http://libc11.org/errno/errno.html
 */
int errno; // TODO: thread-local variable support.
