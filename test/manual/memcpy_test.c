#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	char	src[] = "abcdef";
	char	dst[10];

	printf("src before: \"%s\"\n", src);
	printf("dst addr  : %p\n", (void *)dst);
	printf("ret addr  : %p\n", ft_memcpy(dst, src, 7));
	printf("dst after : \"%s\"\n", dst);
	return (0);
}
