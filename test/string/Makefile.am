AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS = \
  check-memchr   \
  check-memcmp   \
  check-memcpy   \
  check-memmove  \
  check-memset   \
  check-strcmp   \
  check-strlen   \
  check-strncmp  \
  check-strnlen

TESTS = $(check_PROGRAMS)
