/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:27:40 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/16 17:22:07 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../includes/proto_ft.h"

char	*ft_strmap(char *s, void (*f)(char))
{
	char *new;
	int i;

	i = ft_strlen(s);
	printf("%s\n", i);
	if (s == NULL && !*s)
		return (NULL);
	new = (char*)malloc(sizeof(new) * (i + 1));
	new[i + 1] = '\0';
	i = 0;
	while (s[i])
	{
		f(*s);
		new[i] = *s;
		s++;
		i++;
	}
	return (new);
}
