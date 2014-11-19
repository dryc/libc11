/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "syscall.h"

int
__sys_close(const int fd) {
  (void)fd; /* ignore arguments */

  return -1;
}
