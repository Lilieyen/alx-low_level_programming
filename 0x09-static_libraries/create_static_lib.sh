#!/bin/bash
gcc -c *.c
ar rcs liball.a *0
rm *0
