/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 00:59:55 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/05 01:00:14 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	int				i;

	i = 0;
	ptr = (unsigned char*)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == c2)
		{
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
