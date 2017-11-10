/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:09:39 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 15:23:07 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(char *dst, int c, size_t n)
{
	char src;
	char *dest;
	size_t i;

	src = c;
	dest = dst;
	i = 0;
	while (i < n && dest[i] != src)
		i++;
	if (dest[i] == src)
		return (dest + i);
	else
		return (NULL);
}
