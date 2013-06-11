AM_CPPFLAGS += -I$(top_srcdir)/src/include
AM_LDFLAGS  += -L$(top_srcdir)/src -static
AM_LDFLAGS  += -XCClinker $(top_srcdir)/sys/$(HOST_OS)/$(HOST_CPU)/crt0.o

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
