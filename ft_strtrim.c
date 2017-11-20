/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:02:09 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/20 10:20:52 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t			space_counter(const char *s, size_t dir, size_t taille)
{
	size_t		i;

	i = 0;
	while (s[taille] == '\t' || s[taille] == '\n' || s[taille] == '\r' ||
		s[taille] == '\v' || s[taille] == '\f' || s[taille] == ' ')
	{
		taille = taille + (dir);
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	size_t		taille;
	char		*str;

	if (s != NULL)
	{
		start = space_counter(s, 1, 0);
		taille = ft_strlen(s) - 1;
		if (start == taille + 1)
			return ("");
		else
		{
			end = space_counter(s, -1, taille) - 1;
			end = taille - end - start;
			str = ft_strsub(s, start, end);
			return (str);
		}
	}
	else
		return (NULL);
}
