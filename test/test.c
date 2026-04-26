#include "libft.h"
#include <stdio.h>
#include <ctype.h>


void	test_ft_isalpha(void)
{
	int i;
	int	a_arr[] = {
		'a', 'z', 'A', 'Z', 'd', 'X',
		'0', '9', ' ', '\n', '?', '@', '[', '`', '{',
		-1, -127, 127, 128, 255, 0};

	i = 0;
	printf("== test_isalpha ==\n");
	while (i < (int)(sizeof(a_arr) / sizeof(a_arr[0]))){
		printf("[INPUT] %d  [OUTPUT] %d  [EXPECTED] %d\n",
			a_arr[i], ft_isalpha(a_arr[i]), isalpha(a_arr[i]));
		i++;
	}
	printf("\n");
}

void	test_ft_digit(void)
{
	printf(" test_isdigit \n");
	printf("a : %d\n", ft_isdigit('a'));
	printf("1 : %d\n", ft_isdigit('1'));
	printf("\n");
}


int	main(void)
{
	test_ft_isalpha();
}
