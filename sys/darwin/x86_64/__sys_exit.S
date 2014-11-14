/* This is free and unencumbered software released into the public domain. */

#define SYSCALL_EXIT 0x2000001

.text

.global ___sys_exit
___sys_exit:
  /* %rdi = status */
  movq $SYSCALL_EXIT, %rax
  syscall
  hlt
