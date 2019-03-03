#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c; r -rc liball.a *.o
