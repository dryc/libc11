/* This is free and unencumbered software released into the public domain. */

#define SYS_exit 0x2000001

.text

.globl ___sys_exit
___sys_exit:
    /* %rdi = status */
    movq $SYS_exit, %rax
    syscall
    hlt
