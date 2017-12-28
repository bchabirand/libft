/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:23:48 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 04:43:05 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char		**alloc_tab(size_t nb_word)
{
	char	**tab;

	tab = (char**)malloc((nb_word + 1) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	tab[0] = NULL;
	return (tab);
}

static void		split(char **tab, char const *s, char c)
{
	size_t	i;
	char	*word;
	size_t	lw;

	i = 0;
	while (*s != '\0')
	{
		lw = len_word(s, c);
		if (lw != 0)
		{
			word = ft_strsub(s, 0, lw);
			tab[i] = word;
			i++;
		}
		s = s + lw;
		while (*s == c)
			s++;
	}
	tab[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	nb_word;

	if (s == NULL)
		return (alloc_tab(0));
	nb_word = ft_count_word(s, c);
	tab = alloc_tab(nb_word);
	if (tab == NULL)
		return (NULL);
	split(tab, s, c);
	return (tab);
}
