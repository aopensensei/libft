/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:27:22 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/26 16:28:49 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*top;
	t_list	*new;
	t_list	*src_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	top = NULL;
	src_node = lst;
	while (src_node != NULL)
	{
		new = ft_lstnew(f(src_node->content));
		if (new == NULL)
		{
			ft_lstclear(&top, del);
			return (NULL);
		}
		ft_lstadd_back(&top, new);
	}
	return (top);
}
