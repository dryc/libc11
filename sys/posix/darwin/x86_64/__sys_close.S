/* This is free and unencumbered software released into the public domain. */

#define SYS_close 0x2000006

.text

.globl ___sys_close
___sys_close:
    /* %rdi = fd     */
    movq $SYS_close, %rax
    syscall
    ret
    /* %rax = result */
