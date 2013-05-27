noinst_LIBRARIES = libcrt.a
libcrt_a_SOURCES =
libcrt_a_LIBADD  = crt0.o

crt0.o: crt0.S
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

EXTRA_libcrt_a_SOURCES = \
  crt0.S

noinst_LTLIBRARIES = libcsys.la
libcsys_la_SOURCES =
libcsys_la_LIBADD  =

libcsys_la_SOURCES += \
  __sys_exit.S
