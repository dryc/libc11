/* This is free and unencumbered software released into the public domain. */

.text

.global ___sys_exit
___sys_exit:
  movq $0x2000001, %rax /* sys_exit */
  syscall
  hlt
