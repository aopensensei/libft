/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:02:55 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/24 20:05:50 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*rt;

	i = 0;
	rt = NULL;
	while (s[i])
	{
		if (s[i] == c)
			rt = (char *)&s[i];
		i++;
	}
	return (rt);
}
