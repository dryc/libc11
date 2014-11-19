/* This is free and unencumbered software released into the public domain. */

#define SYS_close 6

.section .text

.global __sys_close
__sys_close:
    /* %rdi = fd     */
    movq $SYS_close, %rax
    syscall
    ret
    /* %rax = result */
