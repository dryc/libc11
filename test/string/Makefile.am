AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS = \
  check_memchr   \
  check_memcmp   \
  check_memcpy   \
  check_memmove  \
  check_memset   \
  check_strcmp   \
  check_strlen   \
  check_strncmp  \
  check_strnlen

TESTS = $(check_PROGRAMS)
