/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:28:48 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/17 13:39:29 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (str == NULL)
		return (NULL);
	if ((str = (char*)malloc(sizeof(char) * (size + 1))) == 0)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
