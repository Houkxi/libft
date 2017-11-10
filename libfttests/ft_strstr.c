/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:21:17 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/08 18:26:56 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *hs, char *needle)
{
	int i;

	i = 0;
	while (hs[i] && needle[i] && hs[i] == needle[i])
		i++;
	if (!needle[i])
		return(hs);
	if (!hs[i])
		return(0);
	return (ft_strstr(hs + 1, needle));
}
