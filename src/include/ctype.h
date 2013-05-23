/* This is free and unencumbered software released into the public domain. */

#ifndef _CTYPE_H
#define _CTYPE_H

/**
 * @file
 *
 * <ctype.h> - Character handling.
 *
 * @see http://libc11.org/ctype/
 */

#ifdef __cplusplus
extern "C" {
#endif

int isalnum(int c);

int isalpha(int c);

#if defined(_BSD_SOURCE) || defined(_SVID_SOURCE) || defined(_XOPEN_SOURCE)
int isascii(int c);
#endif

int isblank(int c);

int iscntrl(int c);

int isdigit(int c);

int isgraph(int c);

int islower(int c);

int isprint(int c);

int ispunct(int c);

int isspace(int c);

int isupper(int c);

int isxdigit(int c);

int tolower(int c);

int toupper(int c);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _CTYPE_H */
