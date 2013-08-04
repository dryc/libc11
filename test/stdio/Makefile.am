AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS =  \
  check_snprintf  \
  check_sprintf   \
  check_vsnprintf \
  check_vsprintf

TESTS = $(check_PROGRAMS)
