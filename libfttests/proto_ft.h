/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto_ft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:28:10 by mmanley           #+#    #+#             */
/*   Updated: 2017/11/10 17:58:03 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_FT_H
# define PROTO_FT_H
# include <string.h>
# include <ctype.h>

void	*ft_memset(char *dest, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, void*src, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
void	*ft_memchr(char *dst, int c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int len);
int		ft_atoi(char *str);
char	*ft_strdup(char *src);
char	*ft_strstr(char *hs, char *needle);
char	*ft_strnstr(char *hs, char *needle, unsigned int len);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int len);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, unsigned int len);
size_t	ft_strlcat(char *dest, const char *src, size_t len);

#endif
