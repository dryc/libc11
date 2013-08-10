libc11: C11 standard library
============================

.. image:: https://travis-ci.org/unlicensed/libc11.png?branch=master
   :target: https://travis-ci.org/unlicensed/libc11
   :align: right
   :alt: Travis CI build status

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

.. include:: doc/manual/status.rst

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
`Travis CI`_, Twitter_, and Tumblr_.

.. _GitHub:      http://github.com/unlicensed/libc11
.. _Bitbucket:   http://bitbucket.org/unlicensed/libc11
.. _Ohloh:       http://www.ohloh.net/p/libc11
.. _Freecode:    http://freecode.com/projects/libc11
.. _SourceForge: http://sourceforge.net/projects/libc11/
.. _Travis CI:   http://travis-ci.org/unlicensed/libc11
.. _Twitter:     http://twitter.com/libc11
.. _Tumblr:      http://libc11.tumblr.com/

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
.. _uClibc:   http://en.wikipedia.org/wiki/UClibc

Author
------

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
