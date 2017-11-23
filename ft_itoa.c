/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:48:26 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/23 20:03:59 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int		nbr_count(long n, int i)
{
	if (n < 10)
		return (i);
	else
		return (nbr_count(n / 10, i + 1));
}

char	*nbr_to_str(long n, char *dst, int count)
{
	if (n >= 0 && n <= 9)
	{
		dst[count] = n + 48;
	}
	if (n >= 10)
	{
		nbr_to_str(n / 10, dst, count - 1);
		nbr_to_str(n % 10, dst, count);
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	long	sign;
	int		count;
	long	i;

	sign = 1;
	i = n;
	if (n < 0)
	{
		i *= -1;
		sign = -1;
	}
	count = nbr_count(i, 1);
	if ((dst = (char*)malloc(sizeof(char) * (count + 1))) == 0)
		return (NULL);
	if (sign == -1)
	{
		dst[0] = '-';
		sign = 0;
	}
	dst = nbr_to_str(i, dst, count - sign);
	dst[count + 1] = '\0';
	return (dst);
}
