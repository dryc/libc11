/* This is free and unencumbered software released into the public domain. */

#define SYS_write 4

.syntax unified

.section .text

.global __sys_write
__sys_write:
    /* r0 = fd     */
    /* r1 = buffer */
    /* r2 = count  */
    stmfd sp!, {r7, lr}
    mov r7, #SYS_write
    swi 0
    ldmfd sp!, {r7, lr}
    bx lr
