/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "syscall.h"

void
__sys_exit(int status) {
  (void)status; /* ignore exit code */

  for (;;) {}   /* loop infinitely */
}
