/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:28:34 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/06 00:28:36 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t len)
{
	unsigned char	uch;
	unsigned char	*ucbuf;

	uch = (unsigned char)ch;
	ucbuf = (unsigned char *)buf;
	while (len--)
	{
		if (*ucbuf == uch)
			return ((void *)ucbuf);
		ucbuf++;
	}
	return (NULL);
}
