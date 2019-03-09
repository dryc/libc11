/* This is free and unencumbered software released into the public domain. */

#include <assert.h> /* for assert() */
#include <stdio.h>  /* for printf() */
#include <stdlib.h> /* for EXIT_SUCCESS */

#include <string.h> /* for mem*(), str*() */
int
main(void) {

#define TEST(expr, expected) if ((expr) != (expected)) { \
    /* TODO: printf("TEST \"%s\" failed: expected %d, got %zu\n", #expr, (expected), (expr));*/ \
    return EXIT_FAILURE; \
}

  TEST(strnlen(NULL, 0), 0)
  TEST(strnlen("", 10), 0)
  TEST(strnlen("HELLO", 7), 5)
  TEST(strnlen("HELLO", 2), 2)
  TEST(strnlen("HELLO", 0), 0)
  TEST(strnlen("HE\0LLO", 5), 2)
  TEST(strnlen("HELLOHELLO#@#$tE9c=\001", 19), 19)
  TEST(strnlen("\x80\x80\x80\x80\x80\x80\x80\x80\x80\x80", 11), 10)
  const char *long_string = "This is a long string";
  TEST(strnlen(long_string, 32), 21)
  // check unaligned
  TEST(strnlen(long_string + 1, 32), 20)

  return EXIT_SUCCESS;
}
