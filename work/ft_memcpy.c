/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:18:15 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/23 21:18:29 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdst = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*(pdst++) = *(psrc++);
	return (dest);
}
