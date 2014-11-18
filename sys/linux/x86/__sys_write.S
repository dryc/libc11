/* This is free and unencumbered software released into the public domain. */

#define SYS_write 4

.section .text

.global __sys_write
__sys_write:
    /* 4(%esp) = fd     */
    /* 8(%esp) = buffer */
    /* 12(%esp)= count  */
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx
    movl 8(%ebp), %ebx
    movl 12(%ebp), %ecx
    movl 16(%ebp), %edx
    movl $SYS_write, %eax
    int $0x80
    pop %ebx
    pop %ebp
    ret
    /* %eax = result */
