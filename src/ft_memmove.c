#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *pdst;
	unsigned char *psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst == psrc || len < 1)
		return (dst);
	if (pdst < psrc)
	{
		while (len--)
			*(pdst++) = *(psrc++);
	}
	else
	{
		while (len--)
			pdst[len] = psrc[len];
	}
	return (dst);
}
