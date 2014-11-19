/* This is free and unencumbered software released into the public domain. */

#define SYS_close 6

.section .text

.global __sys_close
__sys_close:
    /* 4(%esp) = fd  */
    pushl %ebp
    movl %esp, %ebp
    pushl %ebx
    movl 8(%ebp), %ebx
    movl $SYS_close, %eax
    int $0x80
    pop %ebx
    pop %ebp
    ret
    /* %eax = result */
