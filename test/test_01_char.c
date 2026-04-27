#include "test_util.h"
#include "../work/libft.h"
#include <ctype.h>
#include <stdio.h>

static int	g_test_values[] = {
	-128, -1, 0, 1,
	'\t', '\n', '\r',
	31, 32, 33,
	'/', '0', '5', '9', ':',
	'@', 'A', 'M', 'Z', '[',
	'`', 'a', 'm', 'z', '{',
	'~', 127, 128, 129, 200, 255
};

static int	value_count(void)
{
	return (sizeof(g_test_values) / sizeof(g_test_values[0]));
}

static int	is_libc_safe(int c)
{
	return (c == EOF || (0 <= c && c <= 255));
}

void	test_ft_isalpha(void)
{
	int	i;
	int	c;

	print_group("ft_isalpha");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		if (is_libc_safe(c))
			assert_int_case("isalpha", i, c, ft_isalpha(c), !!isalpha(c));
		else
			ft_isalpha(c);
		i++;
	}
}

void	test_ft_isdigit(void)
{
	int	i;
	int	c;

	print_group("ft_isdigit");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		if (is_libc_safe(c))
			assert_int_case("isdigit", i, c, ft_isdigit(c), !!isdigit(c));
		else
			ft_isdigit(c);
		i++;
	}
}

void	test_ft_isalnum(void)
{
	int	i;
	int	c;

	print_group("ft_isalnum");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		if (is_libc_safe(c))
			assert_int_case("isalnum", i, c, ft_isalnum(c), !!isalnum(c));
		else
			ft_isalnum(c);
		i++;
	}
}

void	test_ft_isascii(void)
{
	int	i;
	int	c;
	int	expected;

	print_group("ft_isascii");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		expected = (c >= 0 && c <= 127);
		assert_int_case("isascii", i, c, ft_isascii(c), expected);
		i++;
	}
}

void	test_ft_isprint(void)
{
	int	i;
	int	c;

	print_group("ft_isprint");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		if (is_libc_safe(c))
			assert_int_case("isprint", i, c, ft_isprint(c), !!isprint(c));
		else
			ft_isprint(c);
		i++;
	}
}

void	test_ft_toupper(void)
{
	int	i;
	int	c;

	print_group("ft_toupper");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		if (is_libc_safe(c))
			assert_int_case("toupper", i, c, ft_toupper(c), toupper(c));
		else
			ft_toupper(c);
		i++;
	}
}

void	test_ft_tolower(void)
{
	int	i;
	int	c;

	print_group("ft_tolower");
	i = 0;
	while (i < value_count())
	{
		c = g_test_values[i];
		if (is_libc_safe(c))
			assert_int_case("tolower", i, c, ft_tolower(c), tolower(c));
		else
			ft_tolower(c);
		i++;
	}
}

void	test_01_char(void)
{
	print_group("01 char classification and conversion");
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
}
