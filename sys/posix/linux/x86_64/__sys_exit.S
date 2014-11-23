/* This is free and unencumbered software released into the public domain. */

#define SYS_exit_group 231

.section .text

.global __sys_exit
__sys_exit:
    /* %rdi = status */
    movq $SYS_exit_group, %rax
    syscall
    hlt
