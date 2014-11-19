/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "syscall.h"

long
__sys_write(int fd, const void* buffer, unsigned long count) {
  (void)fd, (void)buffer, (void)count; /* ignore arguments */

  return -1;
}
