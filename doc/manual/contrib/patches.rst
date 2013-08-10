.. index:: single: patches; contributing

Contributing Patches
====================

If you wish to contribute a patch, please open a `pull request`__ at:
https://github.com/unlicensed/libc11/pulls

__ https://help.github.com/articles/using-pull-requests

Contribution Guidelines
-----------------------

* Do your best to adhere to the existing :doc:`coding conventions <style>`
  and idioms.
* Don't use hard tabs, and don't leave trailing whitespace on any line.
  Before committing, run ``git diff --check`` to make sure of this.
* Do document every function you add using `Doxygen`_ annotations.
  Read the `tutorial`_ or just look at the existing code for examples.
* Don't touch the `VERSION` file. If you need to change it, do so on your
  private branch only.
* Do feel free to add yourself to the `CREDITS` file and the corresponding
  list in the the `README`. Alphabetical order applies.
* Don't touch the `AUTHORS` file. If your contributions are significant
  enough, be assured we will eventually add you in there.

.. _Doxygen:  http://www.doxygen.org/
.. _tutorial: http://www.stack.nl/~dimitri/doxygen/manual/docblocks.html

Contribution Process
--------------------

Clone the Source Repository
^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

   $ git clone https://github.com/unlicensed/libc11.git

.. code-block:: bash

   $ cd libc11
   $ git checkout -b my-new-branch

Instead of ``my-new-branch``, name the branch meaningfully according to the
changes you intend to make. For example, ...

Write Your Code
^^^^^^^^^^^^^^^

TODO

Commit Your Changes
^^^^^^^^^^^^^^^^^^^

TODO

Update Your Branch
^^^^^^^^^^^^^^^^^^

TODO

Send a Pull Request
^^^^^^^^^^^^^^^^^^^

TODO

Legal Considerations
--------------------

TODO
