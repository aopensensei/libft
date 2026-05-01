#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s;

	s = ft_strjoin("hello", "world");
	printf("join: \"%s\"\n", s);
	printf("addr: %p\n", (void *)s);
	free(s);

	s = ft_strjoin("", "abc");
	printf("empty + abc: \"%s\"\n", s);
	free(s);
	return (0);
}
