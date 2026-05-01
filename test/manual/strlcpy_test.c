#include "../../work/libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst1[10];
	char	dst2[3];
	size_t	ret;

	ret = ft_strlcpy(dst1, "abcdef", sizeof(dst1));
	printf("case1 src=\"abcdef\" size=10\n");
	printf("ret=%zu dst=\"%s\"\n\n", ret, dst1);

	ret = ft_strlcpy(dst2, "abcdef", sizeof(dst2));
	printf("case2 src=\"abcdef\" size=3\n");
	printf("ret=%zu dst=\"%s\"\n\n", ret, dst2);

	ret = ft_strlcpy(dst1, "abcdef", 0);
	printf("case3 src=\"abcdef\" size=0\n");
	printf("ret=%zu dst not written\n", ret);
	return (0);
}
