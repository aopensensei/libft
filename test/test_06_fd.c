#include "test_util.h"
#include "../work/libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

static void	read_file(char *buf, int size, int fd)
{
	int	n;

	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, size - 1);
	buf[n] = '\0';
}

void	test_ft_putchar_fd(void)
{
	int		fd;
	char	buf[10];

	print_group("ft_putchar_fd");
	fd = open("test_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('A', fd);
	read_file(buf, sizeof(buf), fd);
	assert_str("putchar_fd", buf, "A");
	close(fd);
}

void	test_ft_putstr_fd(void)
{
	int		fd;
	char	buf[20];

	print_group("ft_putstr_fd");
	fd = open("test_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd("hello", fd);
	read_file(buf, sizeof(buf), fd);
	assert_str("putstr_fd", buf, "hello");
	close(fd);
}

void	test_ft_putendl_fd(void)
{
	int		fd;
	char	buf[20];

	print_group("ft_putendl_fd");
	fd = open("test_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd("hello", fd);
	read_file(buf, sizeof(buf), fd);
	assert_str("putendl_fd", buf, "hello\n");
	close(fd);
}

void	test_ft_putnbr_fd(void)
{
	int		fd;
	char	buf[20];

	print_group("ft_putnbr_fd");
	fd = open("test_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	ft_putnbr_fd(42, fd);
	read_file(buf, sizeof(buf), fd);
	assert_str("putnbr_fd pos", buf, "42");
	close(fd);

	fd = open("test_fd.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	ft_putnbr_fd(-42, fd);
	read_file(buf, sizeof(buf), fd);
	assert_str("putnbr_fd neg", buf, "-42");
	close(fd);
}

void	test_06_fd(void)
{
	print_group("06 fd 出力関数");
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
}
