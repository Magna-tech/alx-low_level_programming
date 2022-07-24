#!/bin/bash
gcc -c -Werror -Wextra -Wall -pedantic -std=gnu89 *.c
ar -csr liball.a *.o
