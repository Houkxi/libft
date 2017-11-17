/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:28:50 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 16:54:59 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*new;
	size_t			counter1;
	size_t			counter2;
	size_t			i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		counter1 = ft_strlen(s1) - 1;
		counter2 = ft_strlen(s2);
		if((new = (char*)malloc(1 * (counter1 + counter2))) == 0)
			return (NULL);
		while ((s1[i] || i > counter1) && counter2 > 0)
		{
			new[i] = s1[i];
			new[counter2] = s2[counter2];
			i++;
			counter2--;
		}
		new[counter1 + ft_strlen(s2) - 1] = '\0';
		return (new);
	}
	return (NULL);
}
