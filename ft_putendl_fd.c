/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:41:30 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/16 19:14:24 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/proto_ft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	if(str != NULL)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
