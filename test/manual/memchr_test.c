#include "../../work/libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s = "abcde";
	void	*ft;
	void	*orig;

	ft = ft_memchr(s, 'c', 5);
	orig = memchr(s, 'c', 5);
	printf("hit ft   : %p -> %s\n", ft, (char *)ft);
	printf("hit orig : %p -> %s\n\n", orig, (char *)orig);

	ft = ft_memchr(s, 'x', 5);
	orig = memchr(s, 'x', 5);
	printf("not found ft   : %p\n", ft);
	printf("not found orig : %p\n", orig);
	return (0);
}
