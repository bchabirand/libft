/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 01:01:40 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 03:26:03 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*str;

	if (!dest || !src)
		return (NULL);
	str = (unsigned char*)malloc(sizeof(*str) * len);
	ft_memcpy(str, src, len);
	ft_memcpy(dest, str, len);
	free(str);
	return (dest);
}
