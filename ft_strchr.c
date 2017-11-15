/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:52:11 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:49:27 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/proto_ft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	char test;

	i = 0;
	test = c;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == test)
			return ((char*)str + i);
		i++;
	}
	return (0);
}
