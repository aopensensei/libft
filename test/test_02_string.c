#include "test_util.h"
#include "../work/libft.h"
#include <stdio.h>

void	test_ft_strlen(void)
{
	print_group("ft_strlen");
	assert_int("strlen empty", ft_strlen(""), strlen(""));
	assert_int("strlen a", ft_strlen("a"), strlen("a"));
	assert_int("strlen abc", ft_strlen("abc"), strlen("abc"));
}

void	test_ft_strlcpy(void)
{
	print_group("ft_strchr");
	assert_str("strchr hit", ft_strchr("abcde", 'c'), strchr("abcde", 'c'));
	assert_str("strchr first", ft_strchr("abcde", 'a'), strchr("abcde", 'a'));
	assert_str("strchr last", ft_strchr("abcde", 'e'), strchr("abcde", 'e'));
	assert_str("strchr not found", ft_strchr("abcde", 'x'), strchr("abcde", 'x'));
	assert_str("strchr null", ft_strchr("abcde", '\0'), strchr("abcde", '\0'));
}

void	test_ft_strlcat(void)
{
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
}

void	test_ft_strncmp(void)
{
}

void	test_ft_strnstr(void)
{
}

void	test_ft_atoi(void)
{
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
