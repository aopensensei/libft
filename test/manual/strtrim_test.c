#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s;

	s = ft_strtrim("  hello  ", " ");
	printf("trim spaces: \"%s\"\n", s);
	free(s);

	s = ft_strtrim("xxabcxx", "x");
	printf("trim x     : \"%s\"\n", s);
	free(s);

	s = ft_strtrim("abc", "xyz");
	printf("no trim    : \"%s\"\n", s);
	free(s);
	return (0);
}
