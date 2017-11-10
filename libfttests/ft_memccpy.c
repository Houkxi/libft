/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:35:57 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 15:15:41 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	char to_find;
	char *srcs;
	char *dest;
	size_t i;

	to_find = c;
	srcs = src;
	dest = dst;
	i = 0;
	while (i < n && srcs[i] != to_find)
	{
		dest[i] = srcs[i];
		i++;
	}
	if (srcs[i] == to_find)
	{
		return (dest);
	}
	else
		return (NULL);
}
