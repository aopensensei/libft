/* atoi_test.c */
#include "../../work/libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*cases[] = {"42", "-42", "+123", " \t\n 123", "123abc", "abc123", "0"};
	int		i;

	i = 0;
	while (i < 7)
	{
		printf("input=\"%s\" ft=%d orig=%d\n",
			cases[i], ft_atoi(cases[i]), atoi(cases[i]));
		i++;
	}
	return (0);
}
