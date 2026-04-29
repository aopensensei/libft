#include "test_util.h"
#include "../work/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void	to_upper_iter(unsigned int i, char *c)
{
	(void)i;
	if ('a' <= *c && *c <= 'z')
		*c = *c - 32;
}

static char	add_index_mapi(unsigned int i, char c)
{
	return (c + i);
}

void	test_ft_striteri(void)
{
	char	s[] = "abc";

	print_group("ft_striteri");
	ft_striteri(s, to_upper_iter);
	assert_str("striteri upper", s, "ABC");
}

void	test_ft_strmapi(void)
{
	char	*s;

	print_group("ft_strmapi");
	s = ft_strmapi("abc", add_index_mapi);
	assert_str("strmapi add index", s, "ace");
	free(s);
}

void	test_05_iter(void)
{
	print_group("05 iter 文字列反復処理");
	test_ft_striteri();
	test_ft_strmapi();
}
