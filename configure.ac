# Copyright 2018-03-15
# Valentin PRODHOMME valentin@prodhomme.me
#
# This software is governed by the CeCILL-B license under French law and
# abiding by the rules of distribution of free software.  You can  use,
# modify and/ or redistribute the software under the terms of the CeCILL-B
# license as circulated by CEA, CNRS and INRIA at the following URL
# "http://www.cecill.info".
#
# The fact that you are presently reading this means that you have had
# knowledge of the CeCILL-B license and that you accept its terms.
AC_PREREQ([2.68])
AC_INIT([eagle-libc], [0.1], [https://github.com/ValentinProdhomme/eagle-libc/issues])
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_CC
AC_PROG_CPP

# Checks for libraries.
CPPFLAGS=" -nostdlib"
CFLAGS=" -nostdinc -I$(pwd)/include"
CXXFLAGS=" -nostdinc++ -I$(pwd)/include --coverage -g -O0"
LDFLAGS=" -nostdlib -L{$(pwd)}/lib"

# Checks for header files.
AC_CHECK_HEADERS([stddef.h])

# Checks for typedefs, structures, and compiler characteristics.
# Do not check for types (Automake will try to include libc)

# Checks for library functions.
AC_CONFIG_FILES([Makefile
                 test/Makefile
                 test/helloworld/Makefile
                 src/Makefile])
AC_OUTPUT
