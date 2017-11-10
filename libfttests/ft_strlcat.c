/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:44:02 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 17:21:26 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "proto_ft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	j = 0;
	k = ft_strlen (dest);
	i = len - ft_strlen (dest) - 1;
	while (k < i)
	{
		if (j >= len)
			return (len);
		dest[k] = src[j];
		printf("K = %zu, I = %zu\n", k, i);
		k++;
		j++;
	}
	dest[k] = '\0';
	return (k);
}
