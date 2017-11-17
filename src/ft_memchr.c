/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:09:39 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 10:48:41 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*dest;
	size_t	i;

	dest = (char*)s;
	i = 0;
	while (i < n && dest[i])
	{
		if (dest[i] == c)
			return (dest + i);
		i++;
	}
	if (dest[i] == c)
		return (dest + i);
	else
		return (NULL);
}
