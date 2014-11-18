/* This is free and unencumbered software released into the public domain. */

.section .text

.extern _Exit

.global _start
_start:
    call main

    movq %rax, %rdi
    call _Exit

    hlt
