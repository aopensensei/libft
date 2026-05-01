#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	char	buf[10] = "abcdef";

	printf("before: \"%s\"\n", buf);
	printf("ret   : %p\n", ft_memset(buf, 'X', 3));
	printf("after : \"%s\"\n", buf);
	return (0);
}
