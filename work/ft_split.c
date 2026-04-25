/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:32:42 by tmaeda            #+#    #+#             */
/*   Updated: 2026/04/25 20:33:19 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	cnt;
	int		after_deli;
	size_t	i;

	cnt = 0;
	after_deli = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			after_deli = 1;
		}
		else
		{
			if (after_deli == 1)
				cnt++;
			after_deli = 0;
		}
	}
	return (cnt);
}

static void	free_tab(char **tab, size_t cnt)
{
	while (cnt > 0)
		free(tab[--cnt]);
	free(tab);
}

static void	get_str_range(char const *s, char c, size_t *start, size_t *i)
{
	while (s[*i] == c)
		*i = *i + 1;
	*start = *i;
	while (s[*i] != c && s[*i] != '\0')
		*i = *i + 1;
}

char	**ft_split(char const *s, char c)
{
	size_t	str_num;
	char	**tab;
	size_t	i;
	size_t	cnt;
	size_t	start;

	str_num = count_strs(s, c);
	tab = (char **)malloc(sizeof(char *) * (str_num + 1));
	if (!tab)
		return (NULL);
	i = 0;
	cnt = 0;
	while (cnt < str_num)
	{
		get_str_range(s, c, &start, &i);
		tab[cnt] = ft_substr(s, (unsigned int)start, i - start);
		if (tab[cnt] == NULL)
		{
			free_tab(tab, cnt);
			return (NULL);
		}
		cnt++;
	}
	tab[str_num] = NULL;
	return (tab);
}
