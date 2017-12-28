/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:09:53 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/06 20:20:35 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	if (s1 && s2)
	{
		while (*s1 == *s2)
		{
			if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
		}
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (1);
		else
			return (-1);
	}
	return (0);
}
