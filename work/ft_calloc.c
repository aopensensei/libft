/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:52:09 by tmaeda            #+#    #+#             */
/*   Updated: 2026/05/01 09:56:01 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rt;
	size_t	total;

	if (size == 0 || nmemb == 0)
		total = 1;
	else if (nmemb > SIZE_MAX / size)
		return (NULL);
	else
		total = nmemb * size;
	rt = malloc(total);
	if (rt == NULL)
		return (NULL);
	return (ft_memset(rt, 0, total));
}
