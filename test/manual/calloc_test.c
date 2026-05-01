#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		*a;
	size_t	i;
	size_t	memb;

	memb = 5;
	a = ft_calloc(memb, sizeof(int));
	printf("addr: %p\n", (void *)a);
	i = 0;
	while (i < memb)
	{
		printf("a[%zu] = %d\n", i, a[i]);
		i++;
	}
	free(a);
	return (0);
}
