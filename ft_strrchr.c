/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:57:46 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:50:05 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/proto_ft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char test;

	i = 0;
	test = c;
	if (!s[i])
		return (0);
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == test)
			return ((char*)s + i);
		i--;
	}
	return (0);
}
