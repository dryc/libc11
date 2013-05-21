ablibc
======

This is a public domain implementation of the C11_ (ISO/IEC 9899:2011)
standard library.

.. _C11: http://en.wikipedia.org/wiki/C11_%28C_standard_revision%29

Current Status
--------------

This table summarizes which C11 features are implemented at present:

=============== ======== =================
Header          Spec     Status
=============== ======== =================
<assert.h>      C11 7.2  WIP
<complex.h>     C11 7.3  
<ctype.h>       C11 7.4  WIP
<errno.h>       C11 7.5  WIP
<fenv.h>        C11 7.6  
<float.h>       C11 7.7  
<inttypes.h>    C11 7.8  WIP
<iso646.h>      C11 7.9  WIP
<limits.h>      C11 7.10 WIP
<locale.h>      C11 7.11 
<math.h>        C11 7.12 
<setjmp.h>      C11 7.13 
<signal.h>      C11 7.14 
<stdalign.h>    C11 7.15 Implemented.
<stdarg.h>      C11 7.16 Implemented. [1]_
<stdatomic.h>   C11 7.17 WIP
<stdbool.h>     C11 7.18 Implemented.
<stddef.h>      C11 7.19 WIP
<stdint.h>      C11 7.20 WIP
<stdio.h>       C11 7.21 WIP
<stdlib.h>      C11 7.22 WIP
<stdnoreturn.h> C11 7.23 Implemented.
<string.h>      C11 7.24 WIP
<tgmath.h>      C11 7.25 
<threads.h>     C11 7.26 
<time.h>        C11 7.27 
<uchar.h>       C11 7.28 
<wchar.h>       C11 7.29 Omitted. [2]_
<wctype.h>      C11 7.30 Omitted. [2]_
=============== ======== =================

.. rubric:: Footnotes

.. [1] Currently implemented only for the Clang and GCC compilers.

.. [2] Purposely omitted from the library.

Other Implementations
---------------------

* PDCLib_ (public domain)
* Bionic_ (BSD)
* dietlibc_ (GPL)
* EGLIBC_ (LGPL)
* glibc_ (LGPL)
* klibc_ (GPL/BSD)
* musl_ (MIT)
* Newlib_ (LGPL/BSD/etc)
* uClibc_ (LGPL)

.. _PDCLib:   http://pdclib.e43.eu/
.. _Bionic:   http://en.wikipedia.org/wiki/Bionic_%28software%29
.. _dietlibc: http://en.wikipedia.org/wiki/Dietlibc
.. _EGLIBC:   http://en.wikipedia.org/wiki/Embedded_GLIBC
.. _glibc:    http://en.wikipedia.org/wiki/GNU_C_Library
.. _klibc:    http://en.wikipedia.org/wiki/Klibc
.. _musl:     http://en.wikipedia.org/wiki/Musl
.. _Newlib:   http://en.wikipedia.org/wiki/Newlib
.. _uClibc:   http://en.wikipedia.org/wiki/UClibc

License
-------

This is free and unencumbered public domain software. For more information,
see http://unlicense.org/ or the accompanying ``UNLICENSE`` file.
