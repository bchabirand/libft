/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:14:35 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/05 01:14:43 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	if ((s1 && s2) && (n > 0))
	{
		while ((*s1 == *s2) && (i < n))
		{
			i++;
			if ((*s1 == '\0') || (i == n))
				return (0);
			s1++;
			s2++;
		}
		if (*(unsigned char*)s1 > *(unsigned char*)s2)
			return (1);
		else
			return (-1);
	}
	return (0);
}
