/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:59:18 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 14:05:01 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	l_len = 0;
	while (little[l_len])
		l_len++;
	if (len < l_len)
		return (NULL);
	i = 0;
	while (i < len - l_len + 1 && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		if (big[i + j] == '\0')
			return (NULL);
	}
	return (NULL);
}
