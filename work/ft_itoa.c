/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 21:15:53 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 21:15:54 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long nmb)
{
	int	len;

	len = 1;
	while (nmb >= 10)
	{
		nmb = nmb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	l_nmb;
	int		sign;
	int		len;
	char	*rt;

	l_nmb = (long)n;
	sign = 0;
	if (l_nmb < 0)
	{
		sign = 1;
		l_nmb = -l_nmb;
	}
	len = count_digit(l_nmb);
	rt = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (rt == NULL)
		return (NULL);
	rt[len + sign] = '\0';
	while (len)
	{
		rt[--len + sign] = l_nmb % 10 - '0';
		l_nmb = l_nmb / 10;
	}
	if (sign == 1)
		rt[0] = '-';
	return (rt);
}
