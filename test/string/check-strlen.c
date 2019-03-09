/* This is free and unencumbered software released into the public domain. */

#include <assert.h> /* for assert() */
#include <stdio.h>  /* for printf() */
#include <stdlib.h> /* for EXIT_SUCCESS */

#include <string.h> /* for mem*(), str*() */

int
main(void) {
#define TEST(expr, expected) if ((expr) != (expected)) { \
    /* TODO: printf("TEST \"%s\" failed: expected %d, got %zu\n", #expr, (expected), (expr)); */ \
    return EXIT_FAILURE; \
}

  TEST(strlen(""), 0)
  TEST(strlen("HELLO"), 5)
  TEST(strlen("HE\0LLO"), 2)
  TEST(strlen("HELLOHELLO#@#$tE9c=\001"), 20)
  TEST(strlen("\x80\x80\x80\x80\x80\x80\x80\x80\x80\x80"), 10)
  const char *long_string = "This is a long string";
  TEST(strlen(long_string), 21)
  // check unaligned
  TEST(strlen(long_string + 1), 20)

   return EXIT_SUCCESS;
}
