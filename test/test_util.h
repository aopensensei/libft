#ifndef TEST_UTIL_H
# define TEST_UTIL_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		assert_int(char *name, int actual, int expected);
int		assert_int_case(char *name, int index, int input,
			int actual, int expected);
int		assert_str(char *name, char *actual, char *expected);
int		assert_mem(char *name, void *a, void *b, size_t n);
void	print_group(char *name);
void	free_str_array(char **arr);

void	test_01_char(void);
void	test_02_string(void);
void	test_03_memory(void);
void	test_04_create(void);
void	test_05_iter(void);
void	test_06_fd(void);
void	test_07_list(void);

#endif
