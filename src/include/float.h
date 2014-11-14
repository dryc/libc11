/* This is free and unencumbered software released into the public domain. */

#ifndef _FLOAT_H
#define _FLOAT_H

/**
 * @file
 *
 * <float.h> - Characteristics of floating types.
 *
 * @see http://libc11.org/float/
 */

#define DECIMAL_DIG      17
#define FLT_EVAL_METHOD  (-1)
#define FLT_RADIX        2
#define FLT_ROUNDS       (-1)

#define FLT_DECIMAL_DIG  9
#define FLT_DIG          6
#define FLT_EPSILON      0x1P-23F
#define FLT_HAS_SUBNORM  1
#define FLT_MANT_DIG     24
#define FLT_MAX          0x1.fffffeP127F
#define FLT_MAX_10_EXP   38
#define FLT_MAX_EXP      128
#define FLT_MIN          0x1P-126F
#define FLT_MIN_10_EXP   (-37)
#define FLT_MIN_EXP      (-125)
#define FLT_TRUE_MIN     0x1P-149F

#define DBL_DECIMAL_DIG  17
#define DBL_DIG          15
#define DBL_EPSILON      0x1P-52
#define DBL_HAS_SUBNORM  1
#define DBL_MANT_DIG     53
#define DBL_MAX          0x1.fffffffffffffP1023
#define DBL_MAX_10_EXP   308
#define DBL_MAX_EXP      1024
#define DBL_MIN          0x1P-1022
#define DBL_MIN_10_EXP   (-307)
#define DBL_MIN_EXP      (-1021)
#define DBL_TRUE_MIN     0x1P-1074

#define LDBL_DECIMAL_DIG DBL_DECIMAL_DIG
#define LDBL_DIG         DBL_DIG
#define LDBL_EPSILON     DBL_EPSILON
#define LDBL_HAS_SUBNORM DBL_HAS_SUBNORM
#define LDBL_MANT_DIG    DBL_MANT_DIG
#define LDBL_MAX         DBL_MAX
#define LDBL_MAX_10_EXP  DBL_MAX_10_EXP
#define LDBL_MAX_EXP     DBL_MAX_EXP
#define LDBL_MIN         DBL_MIN
#define LDBL_MIN_10_EXP  DBL_MIN_10_EXP
#define LDBL_MIN_EXP     DBL_MIN_EXP
#define LDBL_TRUE_MIN    DBL_TRUE_MIN

#endif /* _FLOAT_H */
