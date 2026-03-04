/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:19:54 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/05 00:20:37 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_islower(int ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isalpha(int ch)
{
	return (ft_islower(ch) || ft_isupper(ch));
}
