/* This is free and unencumbered software released into the public domain. */

#define SYS_exit_group 252

.section .text

.global __sys_exit
__sys_exit:
    /* 4(%esp) = status */
    movl 4(%esp), %ebx
    movl $SYS_exit_group, %eax
    int $0x80
    hlt
