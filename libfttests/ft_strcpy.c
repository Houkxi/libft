/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:52:20 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 17:20:50 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto_ft.h"

/*
--The original function returns an abort.
  Still need to determin how to react when dest size < to src size.
--Original aborts when th src is emty / both are empty
  */
char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (ft_strlen(dest) < ft_strlen(src))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
