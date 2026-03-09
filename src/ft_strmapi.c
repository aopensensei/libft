/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:30:18 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/09 20:42:46 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*rt;

	len = ft_strlen(s);
	rt = (char *)malloc(len + 1);
	if (!rt)
		return (NULL);
	len = 0;
	while (s[len])
	{
		rt[len] = f(len, s[len]);
		len++;
	}
	rt[len] = '\0';
	return (rt);
}
