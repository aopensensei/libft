#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst1[10] = "ab";
	char	dst2[5] = "ab";
	char	dst3[3] = "ab";
	size_t	ret;

	ret = ft_strlcat(dst1, "cd", sizeof(dst1));
	printf("case1 dst=\"ab\" src=\"cd\" size=10\n");
	printf("ret=%zu dst=\"%s\"\n\n", ret, dst1);

	ret = ft_strlcat(dst2, "cdef", sizeof(dst2));
	printf("case2 dst=\"ab\" src=\"cdef\" size=5\n");
	printf("ret=%zu dst=\"%s\"\n\n", ret, dst2);

	ret = ft_strlcat(dst3, "cd", sizeof(dst3));
	printf("case3 dst=\"ab\" src=\"cd\" size=3\n");
	printf("ret=%zu dst=\"%s\"\n", ret, dst3);
	return (0);
}
