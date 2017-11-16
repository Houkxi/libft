/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:09:12 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/16 16:16:39 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/proto_ft.h"
#include <string.h>

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
	}
}
