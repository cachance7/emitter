emitter
=======

A test project to get better acquainted with autotools.

Prerequisites
-------------

Have autotools installed.

Usage
-----

First, generate **configure** from **configure.ac**:
```
autoreconf --install
```

Then either **compile locally**:
```
./configure
make
make install
```

Or **create a package for distribution**:
```
./configure
make distcheck
```
