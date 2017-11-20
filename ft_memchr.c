/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:09:39 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/20 13:59:47 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*dest;
	size_t	i;

	dest = (char*)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < (n - 1) && dest[i])
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
