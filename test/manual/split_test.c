#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	print_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		printf("[%d] addr=%p str=\"%s\"\n", i, (void *)arr[i], arr[i]);
		i++;
	}
	printf("[%d] NULL\n", i);
}

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	main(void)
{
	char	**arr;

	arr = ft_split("  hello   world  ", ' ');
	print_split(arr);
	free_split(arr);

	arr = ft_split("a,b,c", ',');
	print_split(arr);
	free_split(arr);
	return (0);
}
