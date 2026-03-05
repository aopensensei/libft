/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:26:14 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/06 00:26:18 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*ucb1;
	unsigned char	*ucb2;

	ucb1 = (unsigned char *)b1;
	ucb2 = (unsigned char *)b2;
	while (len--)
	{
		if (*ucb1 != *ucb2)
			return (*ucb1 - *ucb2);
		ucb1++;
		ucb2++;
	}
	return (0);
}
