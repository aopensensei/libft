/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:55:11 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/22 22:00:26 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (is_lower(c) || is_upper(c));
}
