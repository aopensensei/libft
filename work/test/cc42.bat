#!/bin/bash

cc -Wall -Wextra -Werror test.c -I../ ../ft_isalpha.c ../ft_isdigit.c

./a.out
