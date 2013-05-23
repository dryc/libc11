/* This is free and unencumbered software released into the public domain. */

#ifndef _ASSERT_H
#define _ASSERT_H

/**
 * @file
 *
 * <assert.h> - C11 7.2: Diagnostics.
 *
 * @see http://libc11.org/assert/
 */

#undef assert

#ifdef NDEBUG
#define assert(ignore) ((void)0)
#else
#define assert(ignore) ((void)0) // TODO
#endif

#define static_assert _Static_assert

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _ASSERT_H */
