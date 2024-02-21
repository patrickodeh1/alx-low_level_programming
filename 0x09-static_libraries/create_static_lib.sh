#!/bin/bash

gcc -c *.c
rm *.c

ar rcs liball.a *.o
rm *.o
