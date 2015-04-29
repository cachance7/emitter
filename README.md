emitter
=======

A test project to get better acquainted with autotools.

What is this?
-------------

This is a very simple C++ project to explore the usage of autotools.
It contains a primary executable **emtest** and a shared library **libemitter**.
Here is an example of the install footprint on OSX (with PREFIX=/usr/local)
```
.
└── usr
    └── local
        ├── bin
        │   └── emtest
        ├── include
        │   └── emitter
        │       ├── canemit.h
        │       └── emitter.h
        └── lib
            ├── libemitter.0.dylib
            ├── libemitter.a
            ├── libemitter.dylib -> libemitter.0.dylib
            └── libemitter.la
```

Prerequisites
-------------

Have autotools and a C++ compiler installed.

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
