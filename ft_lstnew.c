/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 03:24:44 by bchabira          #+#    #+#             */
/*   Updated: 2016/01/15 03:25:12 by bchabira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*new_content;

	if (!(new_content = ft_memalloc(content_size + 1)))
		return (NULL);
	if (!content)
	{
		new_content = NULL;
		content_size = 0;
	}
	else
		ft_memcpy(new_content, content, content_size);
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list->content = new_content;
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
