#include "../../work/libft.h"
#include <stdio.h>

static void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if ('a' <= *c && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	s[] = "abc";

	printf("before: \"%s\"\n", s);
	ft_striteri(s, to_upper);
	printf("after : \"%s\"\n", s);
	return (0);
}
