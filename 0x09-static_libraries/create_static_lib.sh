#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c
ar rc liball.a *.o
rm *.o
ranlib liball.a
