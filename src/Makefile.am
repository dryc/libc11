SUBDIRS = include assert ctype errno inttypes stdarg stdio stdlib string

lib_LTLIBRARIES = libc.la

libc_la_SOURCES =
libc_la_LIBADD  =                \
  $(srcdir)/ctype/libcctype.la   \
  $(srcdir)/stdio/libcstdio.la   \
  $(srcdir)/string/libcstring.la
