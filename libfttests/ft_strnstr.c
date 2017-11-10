/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:26:51 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/08 18:53:28 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *hs, char *needle, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (hs[i] && needle[i] && hs[i] == needle[i] && len != 0)
	{
		i++;
		len--;
	}
	if (len == 0 && needle[i])
		return (0);
	if (!needle[i])
		return(hs);
	if (!hs[i])
		return(0);
	return (ft_strnstr(hs + 1, needle, len - 1));
}
