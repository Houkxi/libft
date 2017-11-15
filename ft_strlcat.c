/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:44:02 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 18:14:13 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../includes/proto_ft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned char *s;
	char *d;
	size_t dsize;
	size_t wspace;
	size_t j;

	s = (unsigned char*)src;
	d = dest;
	dsize = ft_strlen(dest);
	j = 0;
	wspace = size - dsize - 1;
	if (!src || !*src)
		return (dsize);

	while (j < size && s[j])
	{
		d[dsize + j] = s[j];
		printf("J %zu\n", j);
		j++;
	}
	if (dsize > size)
		dsize = size;
	if(dsize + j <= size)
	{
		d[dsize + j] = '\0';
		return(dsize + j);
	}
	else if (j > size)
	{
		d[size - 1] = '\0';
		return (size);
	}
	else
		return (j + dsize);
}

/*#include <string.h>
#include "proto_ft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned char *s;
	char *d;
	size_t i = 0;
	size_t j = 0;
	size_t tmp;

	s = (unsigned char*)src;
	d = dest;
	while (*d)
	{
		if (*d == '\0')
			tmp = i;
		d++;
		i++;
	}
	while (s[j])
	{
		j++;
	}
	if (size > i)
		return (size);
	return (size + j);
}*/
