/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:15:12 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/16 19:14:06 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/proto_ft.h"

void	ft_putstr(char const *str)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
