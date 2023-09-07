#!/bin/bash
gcc -c -std=gnu89 *.c
ar -rcs liball.a *.o
