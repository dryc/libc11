/* This is free and unencumbered software released into the public domain. */

#define SYS_exit 1

.section .text

.global __sys_exit
__sys_exit:
    /* %rdi = status */
    movq $SYS_exit, %rax
    syscall
    hlt
