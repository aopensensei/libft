/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:19:54 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/05 00:29:49 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_upper(int ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

static int	is_lower(int ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isalpha(int ch)
{
	return (is_lower(ch) || is_upper(ch));
}
