/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:57:46 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 17:22:01 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "proto_ft.h"


char	*ft_strrchr( char *str, int c)
{
	int i;
	char test;

	i = 0;
	test = c;
	if (!str [i])
		return (0);
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == test)
			return (&str[i]);
		i--;
	}
	return (0);
}
