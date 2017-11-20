/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:17:38 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/20 19:18:37 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../includes/libft.h"

void	size_word(const char *s, char c, char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s) - 1)
	{
		while (s[i] != c && s[i] != '\0')
		{
			if (s[i] == c && s[i] != '\0')
				i++;
		//	printf("%c\n", s[i]);
			j++;
			i++;
		}
		printf("j = %d\n", j);
		tab[i] = (char*)malloc(sizeof(char) * (j + 1));
		i++;
		j = 0;
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
		if ((s[i] == c && s[i+ 1] != '\0') ||
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

char	**tab_cpy(char **tab, const char *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (tab[k] != '\0')
	{
		printf("AvFIN\n");
		while (s[i] != c && s[i + 1] != '\0')
		{
			printf("AvPresFIN\n");
			printf("%d\n", k);
			printf("%d\n", j);
			printf("%d\n", i);
			if (s[i] == c && s[i + 1] != '\0')
				i++;
			printf("%c\n", s[i]);
			tab[k][j] = s[i];
			printf("%c\n", tab[k][j]);
			j++;
			i++;
		}
		printf("%s\n", tab[k]);
		tab[k][j] = '\0';
		j = 0;
		i++;
		k++;
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
	j = 0;
	if (s != NULL )
	{
		wordcounted = count_words(s, c);
		if (wordcounted == 0)
			return (NULL);
		printf("Word count = %d\n", wordcounted);
		if ((tab = (char**)malloc(sizeof(char*) * (wordcounted))) == NULL)
			return (NULL);
		tab[wordcounted] = 0;
		size_word(s, c, tab);
		tab_cpy(&tab, s, c);
		return (tab);
	}
	return (NULL);
}
