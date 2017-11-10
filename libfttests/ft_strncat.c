/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:30:30 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 17:21:34 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto_ft.h"

char	*ft_strncat(char *dest, const char *src, unsigned int len)
{
	int i;
	unsigned int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] && j < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
