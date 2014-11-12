Current Status
==============

This table summarizes which C11 features are implemented at present:

Nonlocal jumps
=============== ======== =================================== ===================
Header          Spec     Description                         Status
=============== ======== =================================== ===================
<assert.h>      C11 7.2  Diagnostics.                        WIP
<complex.h>     C11 7.3  Complex arithmetic.                 
<ctype.h>       C11 7.4  Character handling.                 Implemented.
<errno.h>       C11 7.5  Errors.                             WIP
<fenv.h>        C11 7.6  Floating-point environment.         
<float.h>       C11 7.7  Characteristics of floating types.  
<inttypes.h>    C11 7.8  Format conversion of integer types. WIP
<iso646.h>      C11 7.9  Alternative spellings.              Implemented.
<limits.h>      C11 7.10 Sizes of integer types.             Implemented.
<locale.h>      C11 7.11 Localization.                       WIP
<math.h>        C11 7.12 Mathematics.                        
<setjmp.h>      C11 7.13 Nonlocal jumps.                     
<signal.h>      C11 7.14 Signal handling.                    WIP
<stdalign.h>    C11 7.15 Alignment.                          Implemented.
<stdarg.h>      C11 7.16 Variable arguments.                 Implemented. [1]_
<stdatomic.h>   C11 7.17 Atomics.                            WIP
<stdbool.h>     C11 7.18 Boolean type and values.            Implemented.
<stddef.h>      C11 7.19 Common definitions.                 Implemented.
<stdint.h>      C11 7.20 Integer types.                      WIP
<stdio.h>       C11 7.21 Input/output.                       WIP
<stdlib.h>      C11 7.22 General utilities.                  WIP
<stdnoreturn.h> C11 7.23 ``_Noreturn``.                      Implemented.
<string.h>      C11 7.24 String handling.                    WIP
<tgmath.h>      C11 7.25 Type-generic math.                  
<threads.h>     C11 7.26 Threads.                            
<time.h>        C11 7.27 Date and time.                      
<uchar.h>       C11 7.28 Unicode utilities.                  
<wchar.h>       C11 7.29 Wide character utilities.           Omitted. [2]_
<wctype.h>      C11 7.30 Wide character utilities.           Omitted. [2]_
=============== ======== =================================== ===================

.. rubric:: Footnotes

.. [1] Currently implemented only for the Clang and GCC compilers.

.. [2] Purposely omitted from the library.
