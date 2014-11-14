/* This is free and unencumbered software released into the public domain. */

#include <assert.h> /* for assert() */
#include <stdio.h>  /* for printf() */
#include <stdlib.h> /* for EXIT_SUCCESS */

#include <errno.h>  /* for E*, errno */

int
main(void) {
  assert(&errno != NULL);

  errno = EDOM;
  assert(errno == EDOM);

  errno = EILSEQ;
  assert(errno == EILSEQ);

  errno = ERANGE;
  assert(errno == ERANGE);

  return EXIT_SUCCESS;
}
