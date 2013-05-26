.section .text

.global __sys_exit
__sys_exit:
  movq $60, %rax /* sys_exit */
  syscall
  hlt
