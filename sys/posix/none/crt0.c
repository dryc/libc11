/* This is free and unencumbered software released into the public domain. */

#include "syscall.h"

extern int main(void);

void
start(void) {
  __sys_exit(main());
}
