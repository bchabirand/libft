/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:17:49 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 04:45:37 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	sub = NULL;
	if ((start + len) <= i)
	{
		sub = (char*)malloc(sizeof(char) * (len + 1));
		if (sub)
		{
			sub = ft_strncpy(sub, s + start, len);
			sub[len] = '\0';
		}
	}
	return (sub);
}
