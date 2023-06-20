#!/bin/bash
gcc -fPIC -c *.c -o liball.o
gcc -shared -o liball.so liball.o

