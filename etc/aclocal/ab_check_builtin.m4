# AB_CHECK_BUILTIN(FUNCTION)
# --------------------------------------------------------------------
AC_DEFUN([AB_CHECK_BUILTIN],
  [AC_CACHE_CHECK([for $1], [ab_cv_builtin_$1],
    [AC_RUN_IFELSE(
      [AC_LANG_PROGRAM([[]], [[return !__has_builtin($1);]])],
      [ab_cv_builtin_$1=yes],
      [ab_cv_builtin_$1=no],
      [ab_cv_builtin_$1=no])])
   AS_IF([test "x$ab_cv_builtin_$1" = xyes],
     [AC_DEFINE(AS_TR_CPP([HAVE_$1]), 1,
       [Define to 1 if your compiler provides $1().])])])
