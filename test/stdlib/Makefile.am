AM_CPPFLAGS += -I$(top_srcdir)/src/include
AM_LDFLAGS  += -L$(top_srcdir)/src -static
AM_LDFLAGS  += -XCClinker $(top_srcdir)/sys/$(HOST_OS)/$(HOST_CPU)/crt0.o

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
