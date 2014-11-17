.. index:: installation

Installation
============

Configuring the Build
---------------------

TODO

Installing on Unix
------------------

.. code-block:: bash

   $ ./autogen.sh
   $ ./configure
   $ make
   $ sudo make install

Platform Compatibility
----------------------

At present, ``libc11`` has been successfully built and tested with the
following compilers and platforms:

======================= =============================== ========================
Platform                Compiler                        Architecture
======================= =============================== ========================
FreeBSD 10.1            | Clang 3.4.1                   | x86-64
Mac OS X 10.7.5         | Xcode 4.6.1 Clang 425.0.28    | x86-64
                        | GCC 4.8.2                     | x86-64
NetBSD 6.1.5            | GCC 4.5.3                     | x86-64
OpenBSD 5.6             | GCC 4.2.1                     | x86-64
OpenBSD 5.3             | GCC 4.2.1                     | x86-64
Solaris 11.2            | GCC 4.8.2                     | x86-64
Ubuntu 14.04            | Clang 3.5                     | x86-64
                        | GCC 4.9.2                     | x86-64
Ubuntu 12.10            | Clang 3.2 PPA                 | x86-64
                        | GCC 4.7.2                     | x86-64
                        | Open64 4.5.2.1                | x86-64
                        | PCC 1.1.0.DEVEL-20130227      | x86-64
                        | TCC 0.9.25                    | x86-64
======================= =============================== ========================

.. note::

   When building on Solaris 11.2 on x86-64, configure as follows::

      $ ./configure CC='gcc -std=c99 -m64'

.. note::

   When building with PCC, configure as follows::

      $ ./configure --disable-shared CC=pcc

.. note::

   When building with TCC, configure as follows::

      $ ./configure --disable-shared --disable-stdio CC=tcc
