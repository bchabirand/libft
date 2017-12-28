/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:18:16 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 04:44:01 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_malloc_str(int len)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		i;
	int		y;

	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	str = ft_malloc_str(len);
	y = 0;
	while (i - 1 < len)
	{
		str[y] = s[i];
		i++;
		y++;
	}
	str[y] = '\0';
	return (str);
}
