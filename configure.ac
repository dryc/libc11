dnl configure.ac                                        -*- Autoconf -*-
dnl
dnl Process this file with `autoconf` to produce a configure script.
dnl
dnl This is free and unencumbered software released into the public domain.
AC_PREREQ([2.68])

dnl Define version information:
m4_define([VERSION_MAJOR],
  m4_esyscmd([cut -d'.' -f1 VERSION | tr -d '\n']))
m4_define([VERSION_MINOR],
  m4_esyscmd([cut -d'.' -f2 VERSION | tr -d '\n']))
m4_define([VERSION_PATCH],
  m4_esyscmd([cut -d'.' -f3 VERSION | tr -d '\n']))
m4_define([VERSION_STRING],
  m4_esyscmd([git describe --dirty --always | tr -d '\n']))

dnl Define package information:
AC_INIT([libc11], [VERSION_STRING],
  [arto@bendiken.net], [libc11],
  [http://libc11.org/])

dnl Configure Autoconf:
AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_SRCDIR([src/Makefile.am])
AC_CONFIG_AUX_DIR([etc/aclocal])
AC_CONFIG_MACRO_DIR([etc/aclocal])
AC_CONFIG_LIBOBJ_DIR([lib])

dnl Configure Automake:
AM_INIT_AUTOMAKE([foreign -Wall -Werror dist-bzip2 subdir-objects nostdinc])
AM_SILENT_RULES([yes])

dnl Check for programs:
AC_PROG_CC(clang gcc cc)
AC_PROG_CC_C99
AM_PROG_CC_C_O
AC_PROG_CPP
AM_PROG_AS
m4_ifdef([AM_PROG_AR], [AM_PROG_AR])
LT_INIT

dnl Check for configuration options:
# --enable-debug/--disable-debug
AC_ARG_ENABLE([debug],
  [AS_HELP_STRING([--enable-debug], [build with debugging support [default=no]])],
  [], [enable_debug=no])
AS_IF([test "x$enable_debug" != "xno"],
  [AC_DEFINE([DEBUG], [1], [Enable debugging support.])],
  [AC_DEFINE([NDEBUG], [1], [Disable assertions.])])
AM_CONDITIONAL([ENABLE_DEBUG], [test "x$enable_debug" != "xno"])
# --enable-unicode/--disable-unicode
AC_ARG_ENABLE([unicode],
  [AS_HELP_STRING([--disable-unicode], [omit support for Unicode strings])])
AS_IF([test "x$enable_unicode" == "xno"],
  [AC_DEFINE([DISABLE_UNICODE], 1, [Define to disable Unicode string support.])])
# --enable-complex/--disable-complex
AC_ARG_ENABLE([complex],
  [AS_HELP_STRING([--disable-complex], [omit support for the <complex.h> interface])])
AS_IF([test "x$enable_complex" == "xno"], [
  AC_DEFINE([DISABLE_COMPLEX], 1, [Define to omit the <complex.h> interface.])
])
AM_CONDITIONAL([DISABLE_COMPLEX], [test "x$enable_complex" == "xno"])
# --enable-ctype/--disable-ctype
AC_ARG_ENABLE([ctype],
  [AS_HELP_STRING([--disable-ctype], [omit support for the <ctype.h> interface])])
AS_IF([test "x$enable_ctype" == "xno"], [
  AC_DEFINE([DISABLE_CTYPE], 1, [Define to omit the <ctype.h> interface.])
])
AM_CONDITIONAL([DISABLE_CTYPE], [test "x$enable_ctype" == "xno"])
# --enable-fenv/--disable-fenv
AC_ARG_ENABLE([fenv],
  [AS_HELP_STRING([--disable-fenv], [omit support for the <fenv.h> interface])])
AS_IF([test "x$enable_fenv" == "xno"], [
  AC_DEFINE([DISABLE_FENV], 1, [Define to omit the <fenv.h> interface.])
])
AM_CONDITIONAL([DISABLE_FENV], [test "x$enable_fenv" == "xno"])
# --enable-float/--disable-float
AC_ARG_ENABLE([float],
  [AS_HELP_STRING([--disable-float], [omit support for the <float.h> interface])])
AS_IF([test "x$enable_float" == "xno"], [
  AC_DEFINE([DISABLE_FLOAT], 1, [Define to omit the <float.h> interface.])
])
AM_CONDITIONAL([DISABLE_FLOAT], [test "x$enable_float" == "xno"])
# --enable-inttypes/--disable-inttypes
AC_ARG_ENABLE([inttypes],
  [AS_HELP_STRING([--disable-inttypes], [omit support for the <inttypes.h> interface])])
AS_IF([test "x$enable_inttypes" == "xno"], [
  AC_DEFINE([DISABLE_INTTYPES], 1, [Define to omit the <inttypes.h> interface.])
])
AM_CONDITIONAL([DISABLE_INTTYPES], [test "x$enable_inttypes" == "xno"])
# --enable-locale/--disable-locale
AC_ARG_ENABLE([locale],
  [AS_HELP_STRING([--disable-locale], [omit support for the <locale.h> interface])])
AS_IF([test "x$enable_locale" == "xno"], [
  AC_DEFINE([DISABLE_LOCALE], 1, [Define to omit the <locale.h> interface.])
])
AM_CONDITIONAL([DISABLE_LOCALE], [test "x$enable_locale" == "xno"])
# --enable-math/--disable-math
AC_ARG_ENABLE([math],
  [AS_HELP_STRING([--disable-math], [omit support for the <math.h> interface])])
AS_IF([test "x$enable_math" == "xno"], [
  AC_DEFINE([DISABLE_MATH], 1, [Define to omit the <math.h> interface.])
])
AM_CONDITIONAL([DISABLE_MATH], [test "x$enable_math" == "xno"])
# --enable-setjmp/--disable-setjmp
AC_ARG_ENABLE([setjmp],
  [AS_HELP_STRING([--disable-setjmp], [omit support for the <setjmp.h> interface])])
AS_IF([test "x$enable_setjmp" == "xno"], [
  AC_DEFINE([DISABLE_SETJMP], 1, [Define to omit the <setjmp.h> interface.])
])
AM_CONDITIONAL([DISABLE_SETJMP], [test "x$enable_setjmp" == "xno"])
# --enable-signal/--disable-signal
AC_ARG_ENABLE([signal],
  [AS_HELP_STRING([--disable-signal], [omit support for the <signal.h> interface])])
AS_IF([test "x$enable_signal" == "xno"], [
  AC_DEFINE([DISABLE_SIGNAL], 1, [Define to omit the <signal.h> interface.])
])
AM_CONDITIONAL([DISABLE_SIGNAL], [test "x$enable_signal" == "xno"])
# --enable-stdio/--disable-stdio
AC_ARG_ENABLE([stdio],
  [AS_HELP_STRING([--disable-stdio], [omit support for the <stdio.h> interface])])
AS_IF([test "x$enable_stdio" == "xno"], [
  AC_DEFINE([DISABLE_STDIO], 1, [Define to omit the <stdio.h> interface.])
])
AM_CONDITIONAL([DISABLE_STDIO], [test "x$enable_stdio" == "xno"])
# --enable-threads/--disable-threads
AC_ARG_ENABLE([threads],
  [AS_HELP_STRING([--disable-threads], [omit support for the <threads.h> interface])])
AS_IF([test "x$enable_threads" == "xno"], [
  AC_DEFINE([DISABLE_THREADS], 1, [Define to omit the <threads.h> interface.])
])
AM_CONDITIONAL([DISABLE_THREADS], [test "x$enable_threads" == "xno"])
# --enable-time/--disable-time
AC_ARG_ENABLE([time],
  [AS_HELP_STRING([--disable-time], [omit support for the <time.h> interface])])
AS_IF([test "x$enable_time" == "xno"], [
  AC_DEFINE([DISABLE_TIME], 1, [Define to omit the <time.h> interface.])
])
AM_CONDITIONAL([DISABLE_TIME], [test "x$enable_time" == "xno"])
# --enable-uchar/--disable-uchar
AC_ARG_ENABLE([uchar],
  [AS_HELP_STRING([--disable-uchar], [omit support for the <uchar.h> interface])])
AS_IF([test "x$enable_uchar" == "xno"], [
  AC_DEFINE([DISABLE_UCHAR], 1, [Define to omit the <uchar.h> interface.])
])
AM_CONDITIONAL([DISABLE_UCHAR], [test "x$enable_uchar" == "xno"])

dnl Check for libraries:

dnl Check for header files:

dnl Check for types:

dnl Check for structures:

dnl Check for compiler characteristics:
AC_CANONICAL_HOST
AS_CASE([$host_cpu],
  [x86_64], [],
  [AC_MSG_ERROR([unsupported CPU architecture: $host_cpu])])
AS_CASE([$host_os],
  [darwin*],  [host_os="darwin"],
  [linux*],   [host_os="linux"],
  [none],     [host_os="none"],
  [openbsd*], [host_os="bsd"],
  [AC_MSG_ERROR([unsupported OS platform: $host_os])])
AX_COMPILER_VENDOR
AS_CASE([$ax_cv_c_compiler_vendor],
  [clang], [AM_CPPFLAGS="$AM_CPPFLAGS -nostdinc"
            AM_LDFLAGS="$AM_LDFLAGS -XCClinker -nostdlib"],
  [gnu],   [AM_CPPFLAGS="$AM_CPPFLAGS -nostdinc"
            AM_LDFLAGS="$AM_LDFLAGS -XCClinker -nostdlib"],
  [pcc],   [AM_CPPFLAGS="$AM_CPPFLAGS -nostdinc"
            AM_LDFLAGS="$AM_LDFLAGS -XCClinker -nostdlib"],
  [tcc],   [AM_CPPFLAGS="$AM_CPPFLAGS -nostdinc"
            AM_LDFLAGS="$AM_LDFLAGS -XCClinker -nostdlib"],
  [AC_MSG_WARN([unsupported compiler: specify preprocessor/linker flags manually])])
AM_CPPFLAGS="$AM_CPPFLAGS -I\$(top_srcdir)/src/include"
TEST_CPPFLAGS="$AM_CPPFLAGS"
AM_CPPFLAGS="$AM_CPPFLAGS -I\$(top_srcdir)/src -I\$(top_srcdir)/sys"
AM_CFLAGS="$AM_CFLAGS"
TEST_CFLAGS="$AM_CFLAGS"
AM_LDFLAGS="$AM_LDFLAGS"
TEST_LDFLAGS="$AM_LDFLAGS"
TEST_LDFLAGS="$TEST_LDFLAGS -L\$(top_srcdir)/src -static"
TEST_LDFLAGS="$TEST_LDFLAGS -XCClinker \$(top_srcdir)/sys/\$(HOST_OS)/\$(HOST_CPU)/crt0.o"

dnl Check for library functions:
AB_CHECK_BUILTIN([__builtin_memchr])
AB_CHECK_BUILTIN([__builtin_memcmp])
AB_CHECK_BUILTIN([__builtin_memcpy])
AB_CHECK_BUILTIN([__builtin_memmove])
AB_CHECK_BUILTIN([__builtin_memset])
AB_CHECK_BUILTIN([__builtin_offsetof])
AB_CHECK_BUILTIN([__builtin_va_arg])
AB_CHECK_BUILTIN([__builtin_va_copy])
AB_CHECK_BUILTIN([__builtin_va_end])
AB_CHECK_BUILTIN([__builtin_va_start])

dnl Check for system services:

dnl Generate output:
AC_CONFIG_FILES([
  Makefile
  lib/Makefile
  man/Makefile
  src/Makefile
  src/include/Makefile
  src/assert/Makefile
  src/complex/Makefile
  src/ctype/Makefile
  src/errno/Makefile
  src/fenv/Makefile
  src/inttypes/Makefile
  src/locale/Makefile
  src/math/Makefile
  src/setjmp/Makefile
  src/signal/Makefile
  src/stdarg/Makefile
  src/stdio/Makefile
  src/stdlib/Makefile
  src/string/Makefile
  src/threads/Makefile
  src/time/Makefile
  src/uchar/Makefile
  src/unistd/Makefile
  sys/Makefile
  sys/bsd/Makefile
  sys/bsd/x86_64/Makefile
  sys/darwin/Makefile
  sys/darwin/x86_64/Makefile
  sys/linux/Makefile
  sys/linux/x86_64/Makefile
  sys/none/Makefile
  test/Makefile
  test/include/Makefile
  test/assert/Makefile
  test/complex/Makefile
  test/ctype/Makefile
  test/errno/Makefile
  test/fenv/Makefile
  test/float/Makefile
  test/inttypes/Makefile
  test/locale/Makefile
  test/math/Makefile
  test/setjmp/Makefile
  test/signal/Makefile
  test/stdarg/Makefile
  test/stdio/Makefile
  test/stdlib/Makefile
  test/string/Makefile
  test/threads/Makefile
  test/time/Makefile
  test/uchar/Makefile
  test/unistd/Makefile])
AC_SUBST([AM_CPPFLAGS])
AC_SUBST([AM_CFLAGS])
AC_SUBST([AM_LDFLAGS])
AC_SUBST([TEST_CPPFLAGS])
AC_SUBST([TEST_CFLAGS])
AC_SUBST([TEST_LDFLAGS])
AC_SUBST([HOST_CPU], [$host_cpu])
AC_SUBST([HOST_VENDOR], [$host_vendor])
AC_SUBST([HOST_OS], [$host_os])
AC_SUBST([PACKAGE_VERSION_MAJOR], ["VERSION_MAJOR"])
AC_SUBST([PACKAGE_VERSION_MINOR], ["VERSION_MINOR"])
AC_SUBST([PACKAGE_VERSION_PATCH], ["VERSION_PATCH"])
AC_OUTPUT
