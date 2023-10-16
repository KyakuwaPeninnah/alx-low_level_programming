#!/bin/bash
gcc -wall -wextra -werrr -pedantic -c -fPIC *.c
gcc -shared -o liball.s *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
