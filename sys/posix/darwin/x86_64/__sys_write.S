/* This is free and unencumbered software released into the public domain. */

#define SYSCALL_WRITE 0x2000004

.text

.globl ___sys_write
___sys_write:
    /* %rdi = fd     */
    /* %rsi = buffer */
    /* %rdx = count  */
    movq $SYSCALL_WRITE, %rax
    syscall
    ret
    /* %rax = result */
