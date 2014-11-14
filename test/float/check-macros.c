/* This is free and unencumbered software released into the public domain. */

#include <assert.h> /* for assert() */
#include <stdio.h>  /* for printf() */
#include <stdlib.h> /* for EXIT_SUCCESS */

#include <float.h>  /* for DECIMAL_DIG, FLT_*, DBL_* */

int
main(void) {
  (void)DECIMAL_DIG;
  (void)FLT_EVAL_METHOD;
  (void)FLT_RADIX;
  (void)FLT_ROUNDS;

  (void)FLT_DECIMAL_DIG;
  (void)FLT_DIG;
  (void)FLT_EPSILON;
  (void)FLT_HAS_SUBNORM;
  (void)FLT_MANT_DIG;
  (void)FLT_MAX;
  (void)FLT_MAX_10_EXP;
  (void)FLT_MAX_EXP;
  (void)FLT_MIN;
  (void)FLT_MIN_10_EXP;
  (void)FLT_MIN_EXP;
  (void)FLT_TRUE_MIN;

  (void)DBL_DECIMAL_DIG;
  (void)DBL_DIG;
  (void)DBL_EPSILON;
  (void)DBL_HAS_SUBNORM;
  (void)DBL_MANT_DIG;
  (void)DBL_MAX;
  (void)DBL_MAX_10_EXP;
  (void)DBL_MAX_EXP;
  (void)DBL_MIN;
  (void)DBL_MIN_10_EXP;
  (void)DBL_MIN_EXP;
  (void)DBL_TRUE_MIN;

  (void)LDBL_DECIMAL_DIG;
  (void)LDBL_DIG;
  (void)LDBL_EPSILON;
  (void)LDBL_HAS_SUBNORM;
  (void)LDBL_MANT_DIG;
  (void)LDBL_MAX;
  (void)LDBL_MAX_10_EXP;
  (void)LDBL_MAX_EXP;
  (void)LDBL_MIN;
  (void)LDBL_MIN_10_EXP;
  (void)LDBL_MIN_EXP;
  (void)LDBL_TRUE_MIN;

  return EXIT_SUCCESS;
}
