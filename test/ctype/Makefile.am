AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS = \
  check_isalnum  \
  check_isalpha  \
  check_isascii  \
  check_isblank  \
  check_iscntrl  \
  check_isdigit  \
  check_isgraph  \
  check_islower  \
  check_isprint  \
  check_ispunct  \
  check_isspace  \
  check_isupper  \
  check_isxdigit \
  check_tolower  \
  check_toupper

TESTS = $(check_PROGRAMS)
