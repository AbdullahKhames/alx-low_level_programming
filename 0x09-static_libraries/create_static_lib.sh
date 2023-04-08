#! /bin/bash
gcc -c $(ls *.c | grep -v "main.c")
ar rc liball.a *.o
