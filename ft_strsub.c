/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:04:21 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/20 11:08:11 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned char	*new;
	size_t			size;
	unsigned int	count;

	if (s != NULL)
	{
		size = ft_strlen(s);
		count = 0;
		if ((new = (unsigned char*)malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		if (start + len > size)
			return (NULL);
		while (len > 0 && s[start])
		{
			new[count] = s[start];
			start++;
			count++;
			len--;
		}
		new[count] = '\0';
		return ((char*)new);
	}
	return (NULL);
}
