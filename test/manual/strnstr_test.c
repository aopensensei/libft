#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("hit          : %s\n", ft_strnstr("hello world", "world", 11));
	printf("not found    : %p\n", (void *)ft_strnstr("hello world", "42", 11));
	printf("empty needle : %s\n", ft_strnstr("hello", "", 5));
	printf("len short    : %p\n", (void *)ft_strnstr("hello world", "world", 5));
	return (0);
}
