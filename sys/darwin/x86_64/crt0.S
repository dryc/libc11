/* This is free and unencumbered software released into the public domain. */

.text

.globl start
start:
  call _main

  movq %rax, %rdi
  call __Exit

  hlt
