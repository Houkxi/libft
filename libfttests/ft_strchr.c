/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:52:11 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/09 17:57:56 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr( char *str, int c)
{
	int i;
	char test;

	i = 0;
	test = c;
	if (!str [i])
		return (0);
	while (str[i])
	{
		if (str[i] == test)
			return (&str[i]);
		i++;
	}
	return (0);
}
