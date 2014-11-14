AM_CPPFLAGS += $(TEST_CPPFLAGS)
AM_CFLAGS   += $(TEST_CFLAGS)
AM_LDFLAGS  += $(TEST_LDFLAGS)

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS = \
  check-isalnum  \
  check-isalpha  \
  check-isascii  \
  check-isblank  \
  check-iscntrl  \
  check-isdigit  \
  check-isgraph  \
  check-islower  \
  check-isprint  \
  check-ispunct  \
  check-isspace  \
  check-isupper  \
  check-isxdigit \
  check-tolower  \
  check-toupper

TESTS = $(check_PROGRAMS)
