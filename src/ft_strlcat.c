#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cnt;

	dstlen = 0;
	while (dstlen < dstsize && dst[dstlen])
		dstlen++;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstsize < 1)
		return (dstlen + srclen);
	cnt = 0;
	while (dstlen + cnt < dstsize - 1 && src[cnt])
	{
		dst[dstlen + cnt] = src[cnt];
		cnt++;
	}
	dst[dstlen + cnt] = '\0';
	return (dstlen + srclen);
}
