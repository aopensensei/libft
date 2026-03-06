/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:48:59 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/06 20:49:01 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*rt;

	i = 0;
	rt = NULL;
	while (str[i])
	{
		if (str[i] == (char)ch)
			rt = (char *)&str[i];
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (rt);
}
