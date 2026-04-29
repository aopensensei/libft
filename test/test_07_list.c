#include "test_util.h"
#include "../work/libft.h"
#include <stdlib.h>
#include <stdio.h>

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

static void	print_int_list(t_list *lst)
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

void	test_ft_lst_sequence(void)
{
	t_list	*lst;
	t_list	*mapped;
	t_list	*tmp;

	print_group("ft_list sequence");
	lst = NULL;
	mapped = NULL;

	printf("1. initial empty list\n");
	print_int_list(lst);

	printf("2. ft_lstnew (single node create)\n");
	tmp = ft_lstnew(new_int(999));
	print_int_list(tmp);

	printf("3. ft_lstdelone (single node delete)\n");
	ft_lstdelone(tmp, del_int);
	printf("single node deleted\n");

	printf("4. ft_lstadd_front (create base list)\n");
	ft_lstadd_front(&lst, ft_lstnew(new_int(20)));
	print_int_list(lst);

	printf("5. ft_lstadd_front (add_front 10)\n");
	ft_lstadd_front(&lst, ft_lstnew(new_int(10)));
	print_int_list(lst);

	printf("6. ft_lstadd_back (add_back 30)\n");
	ft_lstadd_back(&lst, ft_lstnew(new_int(30)));
	print_int_list(lst);

	printf("7. ft_lstsize ft_lstlast\n");
	printf("size: %d\n", ft_lstsize(lst));
	printf("last: %d\n", *(int *)ft_lstlast(lst)->content);

	printf("8. ft_lstiter (add 100)\n");
	ft_lstiter(lst, add_100);
	print_int_list(lst);

	printf("9. ft_lstmap (double)\n");
	mapped = ft_lstmap(lst, double_int, del_int);
	printf("original ");
	print_int_list(lst);
	printf("mapped   ");
	print_int_list(mapped);

	printf("10. ft_lstadd_back(connect mapped list to original list)\n");
	ft_lstadd_back(&lst, mapped);
	print_int_list(lst);

	printf("11. ft_lstclear (clear connected list)\n");
	ft_lstclear(&lst, del_int);
	print_int_list(lst);
	printf("list cleared\n");
}

void	test_07_list(void)
{
	print_group("07 list linked list");
	test_ft_lst_sequence();
}
