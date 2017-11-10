/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:18:55 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 17:25:08 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto_ft.h"

char	*ft_strncpy(char *dest, char *src, int len)
{
	int i;

	i = 0;
	if (ft_strlen(dest) < ft_strlen(src) && len != 0 && len > ft_strlen(dest) + 1)
		return (0);
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
