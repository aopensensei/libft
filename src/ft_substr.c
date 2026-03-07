/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 09:32:44 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/07 09:33:34 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t n1, size_t n2)
{
	if (n1 > n2)
		return (n2);
	return (n1);
}

static char	*get_empstr(void)
{
	char	*p;

	p = (char *)malloc(1);
	if (!p)
		return (NULL);
	p[0] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	size;
	char	*p;
	size_t	i;

	slen = ft_strlen(s);
	if (len == 0 || slen <= start)
		return (get_empstr());
	size = min(slen - start, len);
	p = (char *)malloc(size + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
