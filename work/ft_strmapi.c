/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 21:31:52 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 21:31:54 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*rt;

	len = (unsigned int)ft_strlen(s);
	rt = (char *)malloc(sizeof(char) * len + 1);
	if (rt == NULL)
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
