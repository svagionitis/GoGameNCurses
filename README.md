Go Game n Curses
===========================

A Go Game using nCurses.

Build
=====

There is a bash script, build.sh, which will help to build the executable. This script makes out-of-source build, which means that creates
a directory and puts the executable there. In this case the directory has the format `build-{ARCHITECTURE}`. On command prompt you type
the following

        bash build.sh

If the architecture is AMD 64 bit then the name of the directory would look like `build-x86_64/`. The name of the executable is `gogame`.
