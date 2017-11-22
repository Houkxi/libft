/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:17:38 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/22 18:15:51 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	size_word(const char *s, char c, char **tab, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			if (s[i] && s[i] == c)
				i++;
			j++;
			i++;
		}
		if (j != 0)
		{
			tab[k] = (char*)malloc(sizeof(char) * (j + 1));
			ft_bzero(tab[k], j);
			k++;
			j = 0;
		}
		i++;
	}
	if (k == 0)
	{
		tab[k] = (char*)malloc(sizeof(char) * (1));
		tab[k][0] = '\0';
	}
}

int		count_words(const char *s, char c)
{
	int wordcount;
	int i;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != '\0' && s[i + 1] != c) ||
		(wordcount == 0 && s[wordcount] != c))
		{
			wordcount++;
			i++;
		}
		else
			i++;
	}
	return (wordcount);
}

char	**tab_cpy(char **tab, const char *s, char c, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			tab[k][j] = s[i];
			j++;
			i++;
		}
		while (s[i] && s[i] == c)
			i++;
		if (j != 0)
		{
			tab[k][j + 1] = '\0';
			j = 0;
			k++;
		}
	}
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		wordcounted;

	tab = NULL;
	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (s[i])
	{
		wordcounted = count_words(s, c);
		if ((tab = (char**)malloc(sizeof(char*) * (wordcounted + 1))) == NULL)
			return (NULL);
		tab[wordcounted + 1] = 0;
		size_word(s, c, tab, 0);
		tab_cpy(tab, s, c, 0);
		return (tab);
	}
	return (NULL);
}
