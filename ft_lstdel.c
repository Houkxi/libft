/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 16:44:40 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/23 17:27:00 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{

	t_list *tmp;

	tmp = NULL;
	while (alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		//*alst = NULL;
		tmp = *alst;
		*alst = (*alst)->next;
		tmp = NULL;
		//ft_lstdel(alst, &del);
	}
}
