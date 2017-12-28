/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 00:59:32 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/06 18:29:47 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	unsigned char	x;
	size_t			i;

	src = (unsigned char*)s2;
	dest = (unsigned char*)s1;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == x)
			return ((void*)&dest[i + 1]);
		i++;
	}
	return (NULL);
}
