AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS =   \
  check__Exit      \
  check_abort      \
  check_abs        \
  check_exit       \
  check_labs       \
  check_llabs      \
  check_quick_exit

TESTS = $(check_PROGRAMS)
