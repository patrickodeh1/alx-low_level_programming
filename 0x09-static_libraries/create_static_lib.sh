#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
rm *.o
ranlib liball.a
