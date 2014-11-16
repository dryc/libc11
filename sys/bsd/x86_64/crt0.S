/* This is free and unencumbered software released into the public domain. */

.section .text

.extern _Exit

.global _start
_start:
  call main

  movq %rax, %rdi
  call _Exit

  hlt

#ifdef HOST_NETBSD
/* See: http://www.netbsd.org/docs/kernel/elf-notes.html */
.section ".note.netbsd.ident", "a"
  .p2align 2
  .long 7
  .long 4
  .long 1
  .asciz "NetBSD"
  .p2align 2
  .long 200000000 /* __NetBSD_Version__ in /usr/include/sys/param.h */
  .p2align 2
#endif

#ifdef HOST_OPENBSD
.section ".note.openbsd.ident", "a"
  .p2align 2
  .long 8
  .long 4
  .long 1
  .asciz "OpenBSD"
  .p2align 2
  .long 0
  .p2align 2
#endif
