#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	cnt;

	cnt = 0;
	while (src[cnt])
		cnt++;
	if (dstsize == 0)
		return (cnt);
	while (--dstsize && *src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (cnt);
}
