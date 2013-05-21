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

dnl Check for libraries:

dnl Check for header files:

dnl Check for types:

dnl Check for structures:

dnl Check for compiler characteristics:
AC_CANONICAL_HOST
AX_COMPILER_VENDOR
AS_CASE([$ax_cv_c_compiler_vendor],
  [clang], [AM_CPPFLAGS="$AM_CPPFLAGS -nostdinc" AM_LDFLAGS="$AM_LDFLAGS -nostdlib"],
  [gnu], [AM_CPPFLAGS="$AM_CPPFLAGS -nostdinc" AM_LDFLAGS="$AM_LDFLAGS -nostdlib"],
  [AC_MSG_WARN([unsupported compiler: specify preprocessor/linker flags manually])])

dnl Check for library functions:
AB_CHECK_BUILTIN([__builtin_memchr])
AB_CHECK_BUILTIN([__builtin_memcmp])
AB_CHECK_BUILTIN([__builtin_memcpy])
AB_CHECK_BUILTIN([__builtin_memmove])
AB_CHECK_BUILTIN([__builtin_memset])

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
  test/Makefile
  test/include/Makefile
  test/assert/Makefile
  test/complex/Makefile
  test/ctype/Makefile
  test/errno/Makefile
  test/fenv/Makefile
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
  test/uchar/Makefile])
AC_SUBST([AM_CPPFLAGS])
AC_SUBST([AM_CFLAGS])
AC_SUBST([AM_LDFLAGS])
AC_SUBST([PACKAGE_VERSION_MAJOR], ["VERSION_MAJOR"])
AC_SUBST([PACKAGE_VERSION_MINOR], ["VERSION_MINOR"])
AC_SUBST([PACKAGE_VERSION_PATCH], ["VERSION_PATCH"])
AC_OUTPUT
