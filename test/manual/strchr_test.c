#include "../../work/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	char		*ft;
	char		*orig;

	s = "abcde";
	ft = ft_strchr(s, 'c');
	orig = strchr(s, 'c');

	printf("input        : \"%s\"\n", s);
	printf("search       : '%c'\n", 'c');
	printf("ft ptr       : %p\n", (void *)ft);
	printf("orig ptr     : %p\n", (void *)orig);
	printf("ft string    : \"%s\"\n", ft);
	printf("orig string  : \"%s\"\n", orig);
	return (0);
}
