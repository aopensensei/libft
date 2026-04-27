/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:52:09 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 16:55:26 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rt;
	size_t	total;

	total = nmemb * size;
	if (total == 0)
		total = 1;
	rt = malloc(total);
	if (rt == NULL)
		return (NULL);
	return (ft_memset(rt, 0, total));
}
