/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:21:17 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:50:10 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/proto_ft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	while (haystack[i] && needle[i] && haystack[i] == needle[i])
		i++;
	if (!needle[i])
		return((char*)haystack);
	if (!haystack[i])
		return(0);
	return (ft_strstr((char*)haystack + 1, needle));
}
