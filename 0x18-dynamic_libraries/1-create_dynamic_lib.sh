#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fpic *.c
gcc *.o -shared -o liball.so
export LD_LIBARARY_PATTH=.:$LD_LIBRARY_PATH
