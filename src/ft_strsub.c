/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:04:21 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 16:59:51 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	unsigned char	*new;
	size_t			size;
	unsigned int	count;
	if (s != NULL && s[start])
	{
		size = ft_strlen(s) + 1;
		count = 0;
		if ((new = (char*)malloc(sizeof(char) * (size))) == NULL)
			return (NULL);
		while (len > 0 && s[start])
		{
			new[count] = s[start];
			start++;
			count++;
			len--;
		}
		new[count] = '\0';
		return (new);
	}
	return (NULL);
}
