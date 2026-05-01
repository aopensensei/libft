#include "../../work/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	*src;
	char	*ft;
	char	*orig;

	src = "hello";
	ft = ft_strdup(src);
	orig = strdup(src);

	printf("src addr  : %p\n", (void *)src);
	printf("ft addr   : %p\n", (void *)ft);
	printf("orig addr : %p\n", (void *)orig);
	printf("ft str    : \"%s\"\n", ft);
	printf("orig str  : \"%s\"\n", orig);
	printf("ft != src : %s\n", (ft != src) ? "YES" : "NO");

	free(ft);
	free(orig);
	return (0);
}
