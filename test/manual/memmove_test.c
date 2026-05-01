#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	char	buf1[20] = "abcdef";
	char	buf2[20] = "abcdef";

	printf("before forward : \"%s\"\n", buf1);
	ft_memmove(buf1 + 2, buf1, 4);
	printf("after forward  : \"%s\"\n\n", buf1);

	printf("before backward: \"%s\"\n", buf2);
	ft_memmove(buf2, buf2 + 2, 4);
	printf("after backward : \"%s\"\n", buf2);
	return (0);
}
