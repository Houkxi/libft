/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:46:42 by mmanley           #+#    #+#             */
/*   Updated: 2017/12/01 07:30:51 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlst;

	if ((newlst = (t_list*)malloc(sizeof(t_list))) == 0)
		return (NULL);
	newlst->next = NULL;
	if (!content)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	if (content)
	{
		if ((newlst->content =
			(void*)malloc(content_size)) == 0)
		{
			free(newlst);
			return (NULL);
		}
		ft_memcpy(newlst->content, content, content_size);
		newlst->content_size = content_size;
	}
	return (newlst);
}
