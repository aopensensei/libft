/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:49:42 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/23 22:50:02 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;

	slen = 0;
	while (src[slen])
		slen++;
	if (size == 0)
		return (slen);
	while (--size && *src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (slen);
}
