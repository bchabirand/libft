/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 00:45:37 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 04:37:49 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_word(const char *s, char c)
{
	int		i;
	size_t	in_word;
	size_t	n;

	i = 0;
	in_word = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && in_word)
			in_word = !in_word;
		else if (s[i] != c && !in_word)
		{
			n++;
			in_word = !in_word;
		}
		i++;
	}
	return (n);
}
