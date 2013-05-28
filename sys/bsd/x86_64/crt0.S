/* This is free and unencumbered software released into the public domain. */

.section .text

.extern _Exit

.global _start
_start:
  call main

  movq %rax, %rdi
  call _Exit

  hlt

.section ".note.openbsd.ident", "a"
  .p2align 2
  .long 0x8
  .long 0x4
  .long 0x1
  .ascii "OpenBSD\0"
  .long 0x0
  .p2align 2
