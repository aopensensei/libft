#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	add_index(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	*s;

	s = ft_strmapi("abc", add_index);
	printf("result: \"%s\"\n", s);
	printf("addr  : %p\n", (void *)s);
	free(s);
	return (0);
}
