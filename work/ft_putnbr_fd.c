/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:29:40 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 22:29:41 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l_nmb;
	long	dig_div;

	l_nmb = (long)n;
	if (l_nmb < 0)
	{
		write(fd, "-", 1);
		l_nmb = -l_nmb;
	}
	dig_div = 1;
	while (l_nmb / dig_div >= 10)
		dig_div = dig_div * 10;
	while (dig_div > 0)
	{
		ft_putchar_fd((l_nmb / dig_div) + '0', fd);
		l_nmb = l_nmb % dig_div;
		dig_div = dig_div / 10;
	}
}
