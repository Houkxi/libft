/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:03:54 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 17:47:09 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void *alc;

	if ((alc = (void*)malloc(sizeof(alc) * (size + 1))) == NULL)
		return (NULL);
	ft_bzero(alc, size);
	return (alc);
}
