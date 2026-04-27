#include "test_util.h"

int	assert_int(char *name, int actual, int expected)
{
	if (actual != expected)
	{
		printf("[NG] %s: actual=%d expected=%d\n", name, actual, expected);
		return (1);
	}
	printf("[OK] %s\n", name);
	return (0);
}

int	assert_int_case(char *name, int index, int input, int actual, int expected)
{
	if (actual != expected)
	{
		printf("[NG] %s[%d] input=%d (0x%02X) actual=%d expected=%d\n",
			name, index, input, (unsigned char)input, actual, expected);
		return (1);
	}
	printf("[OK] %s[%d] input=%d (0x%02X)\n",
		name, index, input, (unsigned char)input);
	return (0);
}

int	assert_str(char *name, char *actual, char *expected)
{
	if ((actual == NULL && expected != NULL)
		|| (actual != NULL && expected == NULL)
		|| (actual && expected && strcmp(actual, expected) != 0))
	{
		printf("[NG] %s: actual=%s expected=%s\n", name, actual, expected);
		return (1);
	}
	printf("[OK] %s\n", name);
	return (0);
}

int	assert_mem(char *name, void *a, void *b, size_t n)
{
	if (memcmp(a, b, n) != 0)
	{
		printf("[NG] %s: memory differs\n", name);
		return (1);
	}
	printf("[OK] %s\n", name);
	return (0);
}

void	print_group(char *name)
{
	printf("\n==== %s ====\n", name);
}

void	free_str_array(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
