/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaeda <tmaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 23:06:03 by tmaeda            #+#    #+#             */
/*   Updated: 2026/03/09 23:06:05 by tmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	size_t	cnt;
	int		after_c;
	size_t	i;

	cnt = 0;
	after_c = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			after_c = 1;
		}
		else
		{
			if (after_c == 1)
				cnt++;
			after_c = 0;
		}
		i++;
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
	size_t	len;
	char	**tab;
	size_t	i;
	size_t	cnt;
	size_t	start;

	len = count_str(s, c);
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	cnt = 0;
	while (cnt < len)
	{
		get_str_range(s, c, &start, &i);
		tab[cnt] = ft_substr(s, start, i - start);
		if (tab[cnt] == NULL)
		{
			free_tab(tab, cnt);
			return (NULL);
		}
		cnt++;
	}
	tab[len] = NULL;
	return (tab);
}
