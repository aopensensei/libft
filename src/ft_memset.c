/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:08:29 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/05 19:49:30 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t len)
{
	size_t			i;
	unsigned char	*ucbuf;

	ucbuf = (unsigned char *)buf;
	i = 0;
	while (i < len)
	{
		ucbuf[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
