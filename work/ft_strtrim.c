/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:18:56 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 19:20:11 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	slen;

	start = 0;
	slen = ft_strlen(s1);
	while (start < slen && in_set(s1[start], set))
		start++;
	if (start == slen)
		return (get_empstr());
	end = slen - 1;
	while (end > start && in_set(s1[end], set))
		end--;
	return (ft_substr(s1, (unsigned int)start, end - start + 1));
}
