#!/bin/bash
gcc -Wall -Wextra -O -pedantic -fPIC -shared *.c -o liball.so
