lib_LTLIBRARIES = libc.la

libc_la_SOURCES =
libc_la_LIBADD  = \
  $(top_srcdir)/sys/$(HOST_TYPE)/libcsysio.la \
  $(top_srcdir)/sys/$(HOST_TYPE)/$(HOST_OS)/$(HOST_CPU)/libcsys.la

SUBDIRS = include

SUBDIRS += assert

if !DISABLE_COMPLEX
  SUBDIRS += complex
endif

if !DISABLE_CTYPE
  SUBDIRS += ctype
  libc_la_LIBADD += $(srcdir)/ctype/libcctype.la
endif

SUBDIRS += errno
libc_la_LIBADD += $(srcdir)/errno/libcerrno.la

if !DISABLE_FENV
  SUBDIRS += fenv
endif

if !DISABLE_INTTYPES
  SUBDIRS += inttypes
endif

if !DISABLE_LOCALE
  SUBDIRS += locale
  libc_la_LIBADD += $(srcdir)/locale/libclocale.la
endif

if !DISABLE_MATH
  SUBDIRS += math
endif

if !DISABLE_SETJMP
  SUBDIRS += setjmp
endif

if !DISABLE_SIGNAL
  SUBDIRS += signal
endif

SUBDIRS += stdarg

if !DISABLE_STDIO
  SUBDIRS += stdio
  libc_la_LIBADD += $(srcdir)/stdio/libcstdio.la
endif

SUBDIRS += stdlib
libc_la_LIBADD += $(srcdir)/stdlib/libcstdlib.la

SUBDIRS += string
libc_la_LIBADD += $(srcdir)/string/libcstring.la

if !DISABLE_THREADS
  SUBDIRS += threads
endif

if !DISABLE_TIME
  SUBDIRS += time
endif

if !DISABLE_UCHAR
  SUBDIRS += uchar
endif

SUBDIRS += unistd
