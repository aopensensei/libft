/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:56:47 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/06 22:01:57 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	if (size != 0 && SIZE_MAX / size < number)
		return (NULL);
	p = malloc(number * size);
	if (!p)
		return (NULL);
	ft_bzero(p, number * size);
	return (p);
}
