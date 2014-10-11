libc11: C11 standard library
============================

.. image:: https://travis-ci.org/dryproject/libc11.png?branch=master
   :target: https://travis-ci.org/dryproject/libc11
   :alt: Travis CI build status

.. image:: https://scan.coverity.com/projects/3219/badge.svg
   :target: https://scan.coverity.com/projects/3219
   :alt: Coverity Scan build status

``libc11`` is a public domain implementation of the C11_ (ISO/IEC 9899:2011)
standard library.

.. _C11: http://en.wikipedia.org/wiki/C11_%28C_standard_revision%29

Features
--------

* No build prerequisites beyond the Autotools toolchain and a C99 compiler.
* 100% free and unencumbered `public domain <http://unlicense.org/>`_ software,
  usable in any context and for any purpose.

Current Status
--------------

This table summarizes which C11 features are implemented at present:

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
<stddef.h>      C11 7.19 Common definitions.                 WIP
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

Installation
------------

Installation on Unix
^^^^^^^^^^^^^^^^^^^^

::

   $ ./autogen.sh
   $ ./configure
   $ make
   $ sudo make install
   $ sudo ldconfig                      # on Linux

Elsewhere
---------

Find this project at: GitHub_, Bitbucket_, Ohloh_, Freecode_, SourceForge_,
`Travis CI`_, `Coverity Scan`_, Twitter_, Tumblr_, and COD5_.

.. _GitHub:        http://github.com/dryproject/libc11
.. _Bitbucket:     http://bitbucket.org/dryproject/libc11
.. _Ohloh:         http://www.ohloh.net/p/libc11
.. _Freecode:      http://freecode.com/projects/libc11
.. _SourceForge:   http://sourceforge.net/projects/libc11/
.. _Travis CI:     http://travis-ci.org/dryproject/libc11
.. _Twitter:       http://twitter.com/libc11
.. _Tumblr:        http://libc11.tumblr.com/
.. _COD5:          http://www.cod5.org/archive/l/libc11.html
.. _Coverity Scan: http://scan.coverity.com/projects/3219

Many other open-source implementations of the C standard library exist,
though most of them are licensed more restrictively than this implementation:

* PDCLib_ (public domain)
* PDPCLIB_ (public domain)
* Bionic_ (BSD)
* dietlibc_ (GPL)
* EGLIBC_ (LGPL)
* glibc_ (LGPL)
* klibc_ (GPL/BSD)
* musl_ (MIT)
* Newlib_ (LGPL/BSD/etc)
* olibc_ (BSD)
* uClibc_ (LGPL)

.. _PDCLib:   http://pdclib.e43.eu/
.. _PDPCLIB:  http://pdos.sourceforge.net/
.. _Bionic:   http://en.wikipedia.org/wiki/Bionic_%28software%29
.. _dietlibc: http://en.wikipedia.org/wiki/Dietlibc
.. _EGLIBC:   http://en.wikipedia.org/wiki/Embedded_GLIBC
.. _glibc:    http://en.wikipedia.org/wiki/GNU_C_Library
.. _klibc:    http://en.wikipedia.org/wiki/Klibc
.. _musl:     http://en.wikipedia.org/wiki/Musl
.. _Newlib:   http://en.wikipedia.org/wiki/Newlib
.. _olibc:    http://olibc.github.io/
.. _uClibc:   http://en.wikipedia.org/wiki/UClibc

Author
------

This project is part of the `DRY <http://dryproject.org/>`_ initiative.

* `Arto Bendiken <https://github.com/bendiken>`_ - http://ar.to/

Donations
---------

If you found this software useful and would like to encourage its
maintenance and further development, please consider making a donation to
the `Bitcoin`_ wallet address `1AiNcRvhxJQbBJ98Rcpyc8gtF3dGy8AxGQ`__.

.. _Bitcoin: http://en.wikipedia.org/wiki/Bitcoin
.. __: bitcoin:1AiNcRvhxJQbBJ98Rcpyc8gtF3dGy8AxGQ?label=libc11.org&message=Donation

License
-------

This is free and unencumbered public domain software. For more information,
see http://unlicense.org/ or the accompanying ``UNLICENSE`` file.
