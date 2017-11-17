/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:38:21 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 10:46:14 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

void	ft_putendl(char const *str)
{
	if (str != NULL)
	{
		ft_putstr(str);
		ft_putchar('\n');
	}
}
