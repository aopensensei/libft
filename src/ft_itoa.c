/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:05:27 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/08 23:37:26 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long nb)
{
	int	cnt;

	cnt = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		sign;
	int		len;
	char	*rt;

	nb = (long)n;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	len = count_digit(nb);
	rt = (char *)malloc(len + sign + 1);
	if (!rt)
		return (NULL);
	rt[len + sign] = '\0';
	while (len)
	{
		rt[--len + sign] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (sign == 1)
		rt[0] = '-';
	return (rt);
}
