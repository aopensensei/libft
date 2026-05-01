/* is_test.c */
#include "../../work/libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	values[] = {'A', 'z', '0', ' ', '\n', 127, 128, -1};
	int	i;
	int	c;

	i = 0;
	while (i < (int)(sizeof(values) / sizeof(values[0])))
	{
		c = values[i];
		printf("input=%d '%c'\n", c, (32 <= c && c <= 126) ? c : '.');
		printf("  ft_isalpha : %d\n", ft_isalpha(c));
		printf("  ft_isdigit : %d\n", ft_isdigit(c));
		printf("  ft_isalnum : %d\n", ft_isalnum(c));
		printf("  ft_isascii : %d\n", ft_isascii(c));
		printf("  ft_isprint : %d\n", ft_isprint(c));
		printf("  ft_toupper : %d '%c'\n", ft_toupper(c), ft_toupper(c));
		printf("  ft_tolower : %d '%c'\n\n", ft_tolower(c), ft_tolower(c));
		i++;
	}
	return (0);
}
