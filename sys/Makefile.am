noinst_LIBRARIES = libcrt.a
libcrt_a_SOURCES =
libcrt_a_LIBADD  = crt0.o

crt0.o: linux/x86_64/crt0.S
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

noinst_LTLIBRARIES = libcsys.la
libcsys_la_SOURCES =
libcsys_la_LIBADD  =

libcsys_la_SOURCES += \
  linux/x86_64/__sys_exit.S
