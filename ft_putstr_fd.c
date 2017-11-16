/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:41:53 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/16 19:13:53 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/proto_ft.h"
#include <string.h>

void	ft_putstr_fd(char const *str, int fd)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str != NULL)
	{
		i = ft_strlen(str);
		while (str[j])
		{
			ft_putchar_fd(str[j], fd);
			j++;
			i--;
		}
	}
}
