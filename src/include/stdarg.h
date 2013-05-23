/* This is free and unencumbered software released into the public domain. */

#ifndef _STDARG_H
#define _STDARG_H

/**
 * @file
 *
 * <stdarg.h> - Variable arguments.
 *
 * @see http://libc11.org/stdarg/
 */

typedef __builtin_va_list va_list;

#define va_start(ap, param) __builtin_va_start((ap), (param))

#define va_arg(ap, type)    __builtin_va_arg((ap), (type))

#define va_end(ap)          __builtin_va_end((ap))

#define va_copy(dest, src)  __builtin_va_copy((dest), (src))

#endif /* _STDARG_H */
