/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:48:38 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/06 20:48:42 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	cnt;

	cnt = 0;
	while (src[cnt])
		cnt++;
	if (dstsize == 0)
		return (cnt);
	while (--dstsize && *src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (cnt);
}
