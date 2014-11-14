AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS =  \
  check-macros    \
  check-puts      \
  check-snprintf  \
  check-sprintf   \
  check-vsnprintf \
  check-vsprintf

TESTS = $(check_PROGRAMS)
