#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	char	buf[10] = "abcdef";
	int		i;

	ft_bzero(buf + 2, 3);
	i = 0;
	while (i < 7)
	{
		if (buf[i] == '\0')
			printf("[%d]=\\\\0\n", i);
		else
			printf("[%d]=%c\n", i, buf[i]);
		i++;
	}
	return (0);
}
