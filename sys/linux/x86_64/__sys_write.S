/* This is free and unencumbered software released into the public domain. */

#define SYS_write 1

.section .text

.global __sys_write
__sys_write:
    /* %rdi = fd     */
    /* %rsi = buffer */
    /* %rdx = count  */
    movq $SYS_write, %rax
    syscall
    ret
    /* %rax = result */
