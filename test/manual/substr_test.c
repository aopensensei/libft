#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*src = "hello";
	char	*s;

	s = ft_substr(src, 1, 3);
	printf("src addr: %p\n", (void *)src);
	printf("sub addr: %p\n", (void *)s);
	printf("sub str : \"%s\"\n\n", s);
	free(s);

	s = ft_substr(src, 10, 3);
	printf("start over: \"%s\"\n", s);
	free(s);
	return (0);
}
