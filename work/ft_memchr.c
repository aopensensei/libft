/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 21:20:50 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/24 21:20:52 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc_c;
	unsigned char	*uc_s;

	uc_c = (unsigned char)c;
	uc_s = (unsigned char *)s;
	while (n--)
	{
		if (*uc_s == uc_c)
			return ((void *)uc_s);
		uc_s++;
	}
	return (NULL);
}
