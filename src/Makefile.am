lib_LTLIBRARIES = libc.la

libc_la_SOURCES =
libc_la_LIBADD  =

SUBDIRS = include

SUBDIRS += assert

SUBDIRS += complex

SUBDIRS += ctype
libc_la_LIBADD += $(srcdir)/ctype/libcctype.la

SUBDIRS += errno

SUBDIRS += fenv

SUBDIRS += inttypes

SUBDIRS += locale

SUBDIRS += math

SUBDIRS += setjmp

SUBDIRS += signal

SUBDIRS += stdarg

SUBDIRS += stdio
libc_la_LIBADD += $(srcdir)/stdio/libcstdio.la

SUBDIRS += stdlib

SUBDIRS += string
libc_la_LIBADD += $(srcdir)/string/libcstring.la

SUBDIRS += threads

SUBDIRS += time

SUBDIRS += uchar
