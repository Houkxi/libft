/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:52:20 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:49:18 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/proto_ft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (dst[i] == '\0')
			return (0);
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
