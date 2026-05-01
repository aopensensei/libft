#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s;

	s = ft_itoa(0);
	printf("0       : \"%s\" addr=%p\n", s, (void *)s);
	free(s);

	s = ft_itoa(42);
	printf("42      : \"%s\" addr=%p\n", s, (void *)s);
	free(s);

	s = ft_itoa(-42);
	printf("-42     : \"%s\" addr=%p\n", s, (void *)s);
	free(s);

	s = ft_itoa(-2147483648);
	printf("INT_MIN : \"%s\" addr=%p\n", s, (void *)s);
	free(s);
	return (0);
}
