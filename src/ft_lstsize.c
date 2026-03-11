/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:17:57 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/10 19:33:33 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;

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
