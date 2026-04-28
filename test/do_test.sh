#!/bin/bash

cc -Wall -Wextra -Werror main.c test_*.c ../work/libft.a -I. -I../work
./a.out
