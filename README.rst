****************************
libc11: C11 standard library
****************************

.. image:: https://api.travis-ci.org/dryproject/libc11.svg?branch=master
   :target: https://travis-ci.org/dryproject/libc11
   :alt: Travis CI build status

.. image:: https://scan.coverity.com/projects/3219/badge.svg
   :target: https://scan.coverity.com/projects/3219
   :alt: Coverity Scan build status

``libc11`` is a public domain implementation of the C11_ (ISO/IEC 9899:2011)
standard library.

.. _C11: http://en.wikipedia.org/wiki/C11_%28C_standard_revision%29

Features
========

* Supports the Linux, FreeBSD, OpenBSD, NetBSD, Solaris, and Mac OS X platforms.
* Currently targets the System V ABI for x86 and x86-64, and the EABI for ARM.
* Clean and modular design, most features can be omitted when building.
* No build prerequisites beyond a GNU-compatible toolchain and a C99 compiler.
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
<errno.h>       C11 7.5  Errors.                             Implemented. [1]_
<fenv.h>        C11 7.6  Floating-point environment.         
<float.h>       C11 7.7  Characteristics of floating types.  Implemented.
<inttypes.h>    C11 7.8  Format conversion of integer types. WIP
<iso646.h>      C11 7.9  Alternative spellings.              Implemented.
<limits.h>      C11 7.10 Sizes of integer types.             Implemented.
<locale.h>      C11 7.11 Localization.                       Stubbed.
<math.h>        C11 7.12 Mathematics.                        WIP
<setjmp.h>      C11 7.13 Nonlocal jumps.                     
<signal.h>      C11 7.14 Signal handling.                    WIP
<stdalign.h>    C11 7.15 Alignment.                          Implemented.
<stdarg.h>      C11 7.16 Variable arguments.                 Implemented. [2]_
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
<wchar.h>       C11 7.29 Wide character utilities.           Omitted. [3]_
<wctype.h>      C11 7.30 Wide character utilities.           Omitted. [3]_
=============== ======== =================================== ===================

.. rubric:: Footnotes

.. [1] Thread-local storage not supported as yet.

.. [2] Currently implemented only for the Clang and GCC compilers.

.. [3] Legacy wide-character support purposely omitted from the library.

Platform Support
----------------

=============== =============== ======================= ========================
Platform        Architecture    Binary Interface        Compilers
=============== =============== ======================= ========================
Bare metal      any             N/A                     Clang, GCC
Linux           ARMv6+ [4]_     ARM EABI                Clang, GCC
Linux           x86             i386 SysV ABI           Clang, GCC
Linux           x86-64          AMD64 SysV ABI          Clang, GCC
FreeBSD         x86-64          AMD64 SysV ABI          Clang, GCC
OpenBSD         x86-64          AMD64 SysV ABI          Clang, GCC
NetBSD          x86-64          AMD64 SysV ABI          Clang, GCC
Solaris         x86-64          AMD64 SysV ABI          Clang, GCC
Mac OS X        x86-64          AMD64 SysV ABI          Clang, GCC
=============== =============== ======================= ========================

.. rubric:: Footnotes

.. [4] The ``armhf`` architecture providing a hardware floating-point unit (FPU).

See `http://build.libc11.org <http://build.libc11.org/grid>`__ for the
current build status on all supported platforms.

Installation
============

Installing on Unix
------------------

Configuring, building, and installing the library (by default, into
``/usr/local``) are all performed with the standard incantations::

   $ ./autogen.sh       # for a development checkout only
   $ ./configure
   $ make
   $ sudo make install

Configuration
=============

Configuring a Static Build
--------------------------

By default on most platforms that support both, the library will be built
both as a static library (``libc.a``) as well as a dynamic shared library
(``libc.so`` on most Unix systems, though ``libc.dylib`` on Darwin).

If you don't require a shared library, configure the build accordingly::

   $ ./configure --disable-shared

Configuring a Minimal Build
---------------------------

The library is thoroughly modular. Specific header files and their
underlying function implementations can be omitted using the familiar
``./configure --disable-FEATURE`` facility provided by Autoconf.

For example, if you don't require any numerics support, you might as well
disable the floating-point routines and the mathematics library, as follows::

   $ ./configure --disable-complex --disable-fenv --disable-float --disable-math

To review the list of features, see the output of ``./configure --help``.

Configuring for Bare Metal
--------------------------

The special *none* target operating system builds the library with a
system-call interface where all system operations are simply no-op stubs.
See the ``sys/syscall.h`` header file and the ``sys/posix/none/`` directory
for the syscall stubs that a bare-metal user of libc11 must implement.

The following example shows how one might configure a cross-compilation
build on an x86-64 Linux system, targeting an x86-64 bare-metal system::

   $ ./configure --build=x86_64-unknown-linux-gnu --host=x86_64-unknown-none

Provided your linker supports `weak symbols`_, you can configure the libc11
build as per the aforementioned example, and then when linking libc11 into
your kernel provide your own syscall implementations as strong symbols that
override the default no-op stubs from ``sys/posix/none/``.

.. _weak symbols: http://en.wikipedia.org/wiki/Weak_symbol

Elsewhere
=========

Find this project at: GitHub_, Bitbucket_, `Open Hub`_, SourceForge_,
`Travis CI`_, `Coverity Scan`_, Twitter_, Tumblr_, and COD5_.
See also the project's `Buildbot <http://build.libc11.org/waterfall>`__.

.. _GitHub:        http://github.com/dryproject/libc11
.. _Bitbucket:     http://bitbucket.org/dryproject/libc11
.. _Open Hub:      http://www.openhub.net/p/libc11
.. _SourceForge:   http://sourceforge.net/projects/libc11/
.. _Travis CI:     http://travis-ci.org/dryproject/libc11
.. _Twitter:       http://twitter.com/libc11
.. _Tumblr:        http://libc11.tumblr.com/
.. _COD5:          http://www.cod5.org/archive/l/libc11.html
.. _Coverity Scan: http://scan.coverity.com/projects/3219

Many other open-source implementations of the C standard library exist,
though most of them are licensed more restrictively than this implementation:

========= ============ ======== === ====== === ===== ==== ====== ===============
Project   License      Status   x86 x86-64 ARM ARM64 MIPS MIPS64 Miscellaneous
========= ============ ======== === ====== === ===== ==== ====== ===============
PDCLib_   PD/CC0       Active   Yes Yes    ?   ?     ?    ?      incomplete
PDPCLIB_  PD           Active?  Yes No     No  No    No   No     S/3x0
Bionic_   BSD          Active   Yes Yes    Yes Yes   Yes  Yes    for Android
dietlibc_ GPL          Active?  Yes Yes    Yes No    Yes  Yes    many targets
EGLIBC_   LGPL         Inactive Yes Yes    Yes Yes   Yes  Yes    discontinued
glibc_    LGPL         Active   Yes Yes    Yes Yes   Yes  Yes    many targets
klibc_    GPL/BSD      Active   Yes Yes    Yes No    Yes  Yes    many targets
musl_     MIT          Active   Yes Yes    Yes No    Yes  No     PPC, MicroBlaze
Newlib_   LGPL/BSD/etc Active   Yes Yes    Yes Yes   Yes  Yes    many targets
olibc_    BSD          Active?  Yes Yes    Yes Yes   Yes  Yes    fork of Bionic
OSv_      MIT/BSD      Active   No  Yes    No  Yes   No   No     written in C++
uClibc_   LGPL         Active   Yes Yes    Yes No    Yes  Yes    many targets
========= ============ ======== === ====== === ===== ==== ====== ===============

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
.. _OSv:      https://github.com/cloudius-systems/osv/tree/master/libc
.. _uClibc:   http://en.wikipedia.org/wiki/UClibc

Author
======

This project is part of the `DRY <http://dryproject.org/>`_ initiative.

* `Arto Bendiken <https://github.com/bendiken>`_ - http://ar.to/

Contributors
============

* `Vlad Gluhovsky <https://github.com/gluckq>`_

* `Syed Nasim <https://github.com/hatlesshacker>`_

* `Samuel Sarle <https://github.com/SamuelSarle>`_

Donations
=========

If you found this software useful and would like to encourage its
maintenance and further development, please consider making a $5 donation
to the author(s) via Gratipay_ or Bitcoin_.

.. _Gratipay: https://gratipay.com/bendiken/
.. _Bitcoin:  https://blockchain.info/address/1G9DcLHQTYMXWMJVWgnPaBJ4vuiYYkV4d7

License
=======

This is free and unencumbered public domain software. For more information,
see http://unlicense.org/ or the accompanying ``UNLICENSE`` file.
