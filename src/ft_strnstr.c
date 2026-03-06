/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:21:28 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/06 21:27:05 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *find, size_t len)
{
	size_t	flen;
	size_t	i;
	size_t	j;

	if (find[0] == '\0')
		return (str);
	flen = 0;
	while (find[flen])
		flen++;
	if (len < flen)
		return (NULL);
	i = 0;
	while (i < len - flen + 1 && str[i])
	{
		j = 0;
		while (find[j] && str[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return (&str[i]);
		if (str[i + j] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
