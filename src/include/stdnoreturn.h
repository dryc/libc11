/* This is free and unencumbered software released into the public domain. */

#ifndef _STDNORETURN_H
#define _STDNORETURN_H

/**
 * @file
 *
 * <stdnoreturn.h> - _Noreturn.
 *
 * @see http://libc11.org/stdnoreturn/
 */

#if __STDC_VERSION__ < 201112L
#define _Noreturn
#endif

#ifndef __cplusplus
#define noreturn _Noreturn
#endif

#endif /* _STDNORETURN_H */
