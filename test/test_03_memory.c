#include "test_util.h"
#include "../work/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	test_ft_memset(void)
{
}

void	test_ft_bzero(void)
{
}

void	test_ft_memcpy(void)
{
}

void	test_ft_memmove(void)
{
}

void	test_ft_memchr(void)
{
}

void	test_ft_memcmp(void)
{
}

void	test_ft_calloc(void)
{
}

void	test_ft_strdup(void)
{
}

void	test_03_memory(void)
{
	print_group("03 memory メモリ操作 / 確保");
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_calloc();
	test_ft_strdup();
}
