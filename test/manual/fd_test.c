#include "../../work/libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("manual_fd_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('A', fd);
	ft_putstr_fd(" hello", fd);
	ft_putendl_fd(" world", fd);
	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\n', fd);
	close(fd);

	printf("manual_fd_output.txt を確認してください\n");
	return (0);
}
