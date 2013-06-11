AM_CPPFLAGS += -I$(top_srcdir)/src/include
AM_LDFLAGS  += -L$(top_srcdir)/src -static
AM_LDFLAGS  += -XCClinker $(top_srcdir)/sys/$(HOST_OS)/$(HOST_CPU)/crt0.o

LDADD = $(top_srcdir)/src/libc.la

check_PROGRAMS =  \
  check_snprintf  \
  check_sprintf   \
  check_vsnprintf \
  check_vsprintf

TESTS = $(check_PROGRAMS)
