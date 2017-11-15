/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:30:30 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:49:47 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/proto_ft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t len)
{
	size_t i;
	size_t j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] && j < len)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
