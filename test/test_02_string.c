#include "test_util.h"
#include "../work/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test_ft_strlen(void)
{
	print_group("ft_strlen");
	assert_int("strlen empty", ft_strlen(""), strlen(""));
	assert_int("strlen a", ft_strlen("a"), strlen("a"));
	assert_int("strlen abc", ft_strlen("abc"), strlen("abc"));
}

void	test_ft_strlcpy(void)
{
	char	dst1[10];
	char	dst2[3];

	print_group("ft_strlcpy");
	assert_int("strlcpy normal ret",
		ft_strlcpy(dst1, "abc", sizeof(dst1)), 3);
	assert_str("strlcpy normal dst", dst1, "abc");
	assert_int("strlcpy cut ret",
		ft_strlcpy(dst2, "abc", sizeof(dst2)), 3);
	assert_str("strlcpy cut dst", dst2, "ab");
	assert_int("strlcpy size 0",
		ft_strlcpy(dst1, "abc", 0), 3);
}

void	test_ft_strlcat(void)
{
	char	dst1[10] = "ab";
	char	dst2[5] = "ab";
	char	dst3[3] = "ab";

	print_group("ft_strlcat");
	assert_int("strlcat normal ret",
		ft_strlcat(dst1, "cd", sizeof(dst1)), 4);
	assert_str("strlcat normal dst", dst1, "abcd");
	assert_int("strlcat cut ret",
		ft_strlcat(dst2, "cdef", sizeof(dst2)), 6);
	assert_str("strlcat cut dst", dst2, "abcd");
	assert_int("strlcat no space ret",
		ft_strlcat(dst3, "cd", sizeof(dst3)), 4);
	assert_str("strlcat no space dst", dst3, "ab");
}

void	test_ft_strchr(void)
{
	print_group("ft_strchr");
	assert_str("strchr hit",
		ft_strchr("abcde", 'c'), strchr("abcde", 'c'));
	assert_str("strchr first",
		ft_strchr("abcde", 'a'), strchr("abcde", 'a'));
	assert_str("strchr last",
		ft_strchr("abcde", 'e'), strchr("abcde", 'e'));
	assert_str("strchr not found",
		ft_strchr("abcde", 'x'), strchr("abcde", 'x'));
	assert_str("strchr null",
		ft_strchr("abcde", '\0'), strchr("abcde", '\0'));
}

void	test_ft_strrchr(void)
{
	print_group("ft_strrchr");
	assert_str("strrchr hit",
		ft_strrchr("abcabc", 'b'), strrchr("abcabc", 'b'));
	assert_str("strrchr first",
		ft_strrchr("abc", 'a'), strrchr("abc", 'a'));
	assert_str("strrchr not found",
		ft_strrchr("abc", 'x'), strrchr("abc", 'x'));
	assert_str("strrchr null",
		ft_strrchr("abc", '\0'), strrchr("abc", '\0'));
}

void	test_ft_strncmp(void)
{
	print_group("ft_strncmp");
	assert_int("strncmp same",
		ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	assert_int("strncmp diff",
		ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	assert_int("strncmp n 0",
		ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));
	assert_int("strncmp prefix",
		ft_strncmp("abc", "abcdef", 3), strncmp("abc", "abcdef", 3));
}

void	test_ft_strnstr(void)
{
	print_group("ft_strnstr");
	assert_str("strnstr hit",
		ft_strnstr("hello world", "world", 11), "world");
	assert_str("strnstr not found",
		ft_strnstr("hello world", "42", 11), NULL);
	assert_str("strnstr empty needle",
		ft_strnstr("hello", "", 5), "hello");
	assert_str("strnstr len short",
		ft_strnstr("hello world", "world", 5), NULL);
}

void	test_ft_atoi(void)
{
	print_group("ft_atoi");
	assert_int("atoi normal", ft_atoi("42"), atoi("42"));
	assert_int("atoi negative", ft_atoi("-42"), atoi("-42"));
	assert_int("atoi spaces", ft_atoi(" \t\n 123"), atoi(" \t\n 123"));
	assert_int("atoi plus", ft_atoi("+123"), atoi("+123"));
	assert_int("atoi stop", ft_atoi("123abc"), atoi("123abc"));
}

void	test_02_string(void)
{
	print_group("02 string 文字列操作");
	test_ft_strlen();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_atoi();
}
