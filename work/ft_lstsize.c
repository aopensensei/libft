#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	

	if (lst == NULL)
		return (0);
	cnt = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
