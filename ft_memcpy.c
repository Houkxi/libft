/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:19:56 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:48:44 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/proto_ft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *dest;
	unsigned char *srcs;
	size_t i;

	dest= dst;
	srcs = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcs[i];
		i++;
	}
	return(dst);
}
