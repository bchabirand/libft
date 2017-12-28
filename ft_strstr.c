/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:17:36 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 04:45:46 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (*s2 == '\0')
		return ((char*)s1);
	len = ft_strlen((char*)s2);
	while (s1[i])
	{
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (j == len)
				return ((char*)&s1[i - j]);
		}
		i++;
	}
	return (NULL);
}
