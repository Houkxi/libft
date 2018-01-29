/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:28:10 by mmanley           #+#    #+#             */
/*   Updated: 2018/01/18 19:02:56 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <math.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
long				ft_basic_op(long n1, long n2, char op);
int					ft_count_btw(char *s, char c);
void				ft_deltab(char **tab);
double				ft_dim(double a, double b);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int value, int base);
void				ft_lst_print(t_list **alst);
void				ft_lstadd_end(t_list **alst, t_list *new);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
double				ft_max_min(double a, double b, char *str);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *dest, int c, size_t len);
char				**ft_newtab(int yaxis, int xaxis, char c);
int					ft_occ_counter(char *s, char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putendl(char const *str);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putnbr(int nb);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putstr(char const *str);
int					rec_nbr_count(long nb, int i, int base);
void				ft_show_tab(char **tab);
void				ft_show_tab_int(int **tab, int sizey, int sizex);
size_t				ft_sqr_root(size_t nb);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *str);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **ap);
char				*ft_strdup(const char *src);
int					ft_strequ(const char *s1, const char *s2);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strjoin(const char *s1, const char *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char *s, char (*f)(char));
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *haystack,
								const char *needle, size_t len);
char				*ft_strrchr(const char *str, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_tabcpy(char **dst, char **src);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
