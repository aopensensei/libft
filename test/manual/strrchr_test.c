#include "../../work/libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*s = "abcabc";
	char		*ft;
	char		*orig;

	ft = ft_strrchr(s, 'b');
	orig = strrchr(s, 'b');
	printf("input       : \"%s\"\n", s);
	printf("search      : 'b'\n");
	printf("ft ptr      : %p\n", (void *)ft);
	printf("orig ptr    : %p\n", (void *)orig);
	printf("ft string   : \"%s\"\n", ft);
	printf("orig string : \"%s\"\n\n", orig);

	ft = ft_strrchr(s, 'x');
	orig = strrchr(s, 'x');
	printf("search not found: 'x'\n");
	printf("ft ptr      : %p\n", (void *)ft);
	printf("orig ptr    : %p\n", (void *)orig);
	return (0);
}
