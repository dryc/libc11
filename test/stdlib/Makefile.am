AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS =   \
  check-_Exit      \
  check-abort      \
  check-abs        \
  check-exit       \
  check-labs       \
  check-llabs      \
  check-macros     \
  check-quick_exit

TESTS = $(check_PROGRAMS)
