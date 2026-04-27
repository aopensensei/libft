/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:06:02 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/24 19:06:20 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	cnt;

	dlen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	slen = 0;
	while (src[slen])
		slen++;
	if (size < 1 || dlen == size)
		return (dlen + slen);
	cnt = 0;
	while (src[cnt] && dlen + cnt < size -1)
	{
		dst[dlen + cnt] = src[cnt];
		cnt++;
	}
	dst[dlen + cnt] = '\0';
	return (dlen + slen);
}
