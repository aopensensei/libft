/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:03:28 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 18:05:19 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*rt;
	size_t	i;
	size_t	j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	rt = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (rt == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		rt[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		rt[i + j] = s2[j];
		j++;
	}
	rt[i + j] = '\0';
	return (rt);
}
