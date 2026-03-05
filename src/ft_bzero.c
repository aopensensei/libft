#include "libft.h"

void	*ft_bzero(void *buf, size_t len)
{
	return (ft_memset(buf, 0, len));
}
