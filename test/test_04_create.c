#include "test_util.h"
#include "../work/libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	test_ft_substr(void)
{
	char	*s;

	print_group("ft_substr");
	s = ft_substr("hello", 1, 3);
	assert_str("substr middle", s, "ell");
	free(s);
	s = ft_substr("hello", 10, 3);
	assert_str("substr over start", s, "");
	free(s);
}

void	test_ft_strjoin(void)
{
	char	*s;

	print_group("ft_strjoin");
	s = ft_strjoin("hello", "world");
	assert_str("strjoin normal", s, "helloworld");
	free(s);
	s = ft_strjoin("", "abc");
	assert_str("strjoin empty", s, "abc");
	free(s);
}

void	test_ft_strtrim(void)
{
	char	*s;

	print_group("ft_strtrim");
	s = ft_strtrim("  hello  ", " ");
	assert_str("strtrim spaces", s, "hello");
	free(s);
	s = ft_strtrim("xxabcxx", "x");
	assert_str("strtrim x", s, "abc");
	free(s);
}

void	test_ft_split(void)
{
	char	**arr;

	print_group("ft_split");
	arr = ft_split("a,b,c", ',');
	assert_str("split[0]", arr[0], "a");
	assert_str("split[1]", arr[1], "b");
	assert_str("split[2]", arr[2], "c");
	assert_int("split end", arr[3] == NULL, 1);
	free_str_array(arr);

	arr = ft_split("  hello   world  ", ' ');
	assert_str("split space[0]", arr[0], "hello");
	assert_str("split space[1]", arr[1], "world");
	assert_int("split space end", arr[2] == NULL, 1);
	free_str_array(arr);
}

void	test_ft_itoa(void)
{
	char	*s;

	print_group("ft_itoa");
	s = ft_itoa(0);
	assert_str("itoa zero", s, "0");
	free(s);
	s = ft_itoa(42);
	assert_str("itoa positive", s, "42");
	free(s);
	s = ft_itoa(-42);
	assert_str("itoa negative", s, "-42");
	free(s);
	s = ft_itoa(-2147483648);
	assert_str("itoa int min", s, "-2147483648");
	free(s);
}

void	test_04_create(void)
{
	print_group("04 create 文字列生成 / 加工");
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
}
