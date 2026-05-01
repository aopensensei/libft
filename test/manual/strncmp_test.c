#include "../../work/libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("same   ft=%d orig=%d\n",
		ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("diff   ft=%d orig=%d\n",
		ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	printf("n=0    ft=%d orig=%d\n",
		ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));
	printf("prefix ft=%d orig=%d\n",
		ft_strncmp("abc", "abcdef", 3), strncmp("abc", "abcdef", 3));
	return (0);
}
