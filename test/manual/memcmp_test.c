#include "../../work/libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("same ft=%d orig=%d\n",
		ft_memcmp("abc", "abc", 3), memcmp("abc", "abc", 3));
	printf("diff ft=%d orig=%d\n",
		ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));
	printf("n=0  ft=%d orig=%d\n",
		ft_memcmp("abc", "xyz", 0), memcmp("abc", "xyz", 0));
	return (0);
}
