#include "../../work/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	size_t		ft;
	size_t		orig;

	s = "abc";
	ft = ft_strlen(s);
	orig = strlen(s);

	printf("input   : \"%s\"\n", s);
	printf("ft      : %zu\n", ft);
	printf("original: %zu\n", orig);
	return (0);
}
