/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:03:54 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/16 15:48:17 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../includes/proto_ft.h"

void	*ft_memalloc(size_t size)
{
	void *alc;
	alc = (void*)malloc(sizeof(alc) * (size + 1));
	if (alc == NULL)
		return (NULL);
	ft_bzero(alc, size);
	return ((void*)alc);
}
