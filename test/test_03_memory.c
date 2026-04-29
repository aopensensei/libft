#include "test_util.h"
#include "../work/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	test_ft_memset(void)
{
	char	a[10];
	char	b[10];

	print_group("ft_memset");
	ft_memset(a, 'x', 5);
	memset(b, 'x', 5);
	assert_mem("memset", a, b, 5);
}

void	test_ft_bzero(void)
{
	char	a[10] = "abcdef";
	char	b[10] = "abcdef";

	print_group("ft_bzero");
	ft_bzero(a, 3);
	bzero(b, 3);
	assert_mem("bzero", a, b, 6);
}

void	test_ft_memcpy(void)
{
	char	src[] = "abcdef";
	char	a[10];
	char	b[10];

	print_group("ft_memcpy");
	ft_memcpy(a, src, 6);
	memcpy(b, src, 6);
	assert_mem("memcpy", a, b, 6);
}

void	test_ft_memmove(void)
{
	char	a[10] = "abcdef";
	char	b[10] = "abcdef";

	print_group("ft_memmove");
	ft_memmove(a + 2, a, 4);
	memmove(b + 2, b, 4);
	assert_mem("memmove overlap", a, b, 6);
}

void	test_ft_memchr(void)
{
	print_group("ft_memchr");
	assert_int("memchr hit",
		ft_memchr("abcde", 'c', 5) != NULL,
		memchr("abcde", 'c', 5) != NULL);
	assert_int("memchr not found",
		ft_memchr("abcde", 'x', 5) == NULL,
		memchr("abcde", 'x', 5) == NULL);
}

void	test_ft_memcmp(void)
{
	print_group("ft_memcmp");
	assert_int("memcmp same",
		ft_memcmp("abc", "abc", 3),
		memcmp("abc", "abc", 3));
	assert_int("memcmp diff",
		ft_memcmp("abc", "abd", 3),
		memcmp("abc", "abd", 3));
}

void	test_ft_calloc(void)
{
	int	*a;
	int	i;

	print_group("ft_calloc");
	a = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		if (a[i] != 0)
			printf("[NG] calloc not zero\n");
		i++;
	}
	printf("[OK] calloc zero init\n");
	free(a);
}

void	test_ft_strdup(void)
{
	char	*src = "hello";
	char	*a;
	char	*b;

	print_group("ft_strdup");
	a = ft_strdup(src);
	b = strdup(src);
	assert_str("strdup", a, b);
	free(a);
	free(b);
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
