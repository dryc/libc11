/* This is free and unencumbered software released into the public domain. */

#define SYS_exit 1

.syntax unified

.section .text

.global __sys_exit
__sys_exit:
    /* r0 = status */
    mov r7, #SYS_exit
    swi 0
1:  b 1b
