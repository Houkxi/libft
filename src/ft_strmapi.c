/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:45:07 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 16:04:10 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;
	unsigned int j;

	j = 0;
	if (s != NULL && s[i])
	{
		i = ft_strlen(s) + 1;
		if ((new = (char*)malloc(1 * i)) == 0)
			return (NULL);
		i = 0;

		while (s[i])
		{
			new[i] = f(j, s[i]);
			i++;
			j++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
