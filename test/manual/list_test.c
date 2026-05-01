#include "../../work/libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	*new_int(int value)
{
	int	*p;

	p = malloc(sizeof(int));
	if (!p)
		return (NULL);
	*p = value;
	return (p);
}

static void	del_int(void *content)
{
	free(content);
}

static void	print_list(t_list *lst)
{
	int	i;

	i = 0;
	printf("list: ");
	while (lst)
	{
		printf("[%d]=%d ", i, *(int *)lst->content);
		lst = lst->next;
		i++;
	}
	printf("\n");
}

static void	add_100(void *content)
{
	*(int *)content += 100;
}

static void	*double_int(void *content)
{
	return (new_int(*(int *)content * 2));
}

int	main(void)
{
	t_list	*lst;
	t_list	*mapped;
	t_list	*tmp;

	lst = NULL;
	printf("single node create/delete\n");
	tmp = ft_lstnew(new_int(999));
	print_list(tmp);
	ft_lstdelone(tmp, del_int);

	printf("create list\n");
	ft_lstadd_back(&lst, ft_lstnew(new_int(20)));
	ft_lstadd_front(&lst, ft_lstnew(new_int(10)));
	ft_lstadd_back(&lst, ft_lstnew(new_int(30)));
	print_list(lst);
	printf("size=%d last=%d\n", ft_lstsize(lst),
		*(int *)ft_lstlast(lst)->content);

	printf("iter add 100\n");
	ft_lstiter(lst, add_100);
	print_list(lst);

	printf("map double\n");
	mapped = ft_lstmap(lst, double_int, del_int);
	print_list(mapped);

	printf("connect mapped to original\n");
	ft_lstadd_back(&lst, mapped);
	print_list(lst);

	printf("clear all\n");
	ft_lstclear(&lst, del_int);
	print_list(lst);
	return (0);
}
