/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:46:20 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 17:48:17 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*rt;

	slen = ft_strlen(s);
	if (len == 0 || slen <= start)
		return (NULL);
	if (len > slen - start)
		len = slen - start;
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (rt == NULL)
		return (NULL);
	ft_strlcpy(rt, &s[start], len + 1);
	return (rt);
}
