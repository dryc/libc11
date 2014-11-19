/* This is free and unencumbered software released into the public domain. */

#define SYS_close 6

.syntax unified

.section .text

.global __sys_close
__sys_close:
    /* r0 = fd     */
    stmfd sp!, {r7, lr}
    mov r7, #SYS_close
    swi 0
    ldmfd sp!, {r7, lr}
    bx lr
    /* r0 = result */
