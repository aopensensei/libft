/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:34:15 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/07 21:05:23 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char ch, char const *set)
{
	while (*set)
	{
		if (ch == *(set++))
			return (1);
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
	size_t	len;

	start = 0;
	len = ft_strlen(s1);
	while (start < len && is_in_set(s1[start], set))
		start++;
	if (start == len)
		return (get_empstr());
	end = len - 1;
	while (end > start && is_in_set(s1[end], set))
		end--;
	return (ft_substr(s1, (unsigned int)start, end - start + 1));
}
