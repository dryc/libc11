/* This is free and unencumbered software released into the public domain. */

#ifndef _STDALIGN_H
#define _STDALIGN_H

/**
 * @file
 *
 * <stdalign.h> - C11 7.15: Alignment.
 *
 * @see http://libc11.org/stdalign/
 */

#if __STDC_VERSION__ < 201112L
#define _Alignas
#define _Alignof
#endif

#define alignas _Alignas

#define alignof _Alignof

#define __alignas_is_defined 1

#define __alignof_is_defined 1

#endif /* _STDALIGN_H */
