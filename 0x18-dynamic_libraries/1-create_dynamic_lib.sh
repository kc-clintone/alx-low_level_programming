#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c all_funcs.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
rm *.o
