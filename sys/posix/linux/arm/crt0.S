/* This is free and unencumbered software released into the public domain. */

.syntax unified

.section .text

.extern _Exit

.global _start
_start:
    bl main

    bl _Exit
1:  b 1b
