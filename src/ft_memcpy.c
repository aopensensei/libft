#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (len--)
		*(pdst++) = *(psrc++);
	return (dst);
}
