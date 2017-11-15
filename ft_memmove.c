/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:21:07 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/15 11:48:50 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/proto_ft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char tmp[len];
	ft_memcpy(tmp, (unsigned char*)src, len);
	ft_memcpy(dst, tmp, len);
	return (dst);
}
