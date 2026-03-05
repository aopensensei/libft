#include <stddef.h>

void	*memset(void *buf, int ch, size_t len)
{
	size_t			i;
	unsigned char	*ucbuf;

	ucbuf = (unsigned chari *)buf;
	i = 0;
	while (i < len)
	{
		ucbuf[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
