# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 11:58:31 by mmanley           #+#    #+#              #
#    Updated: 2017/11/24 16:54:07 by mmanley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

INC = ./libft.h

SRC = ./ft_atoi.c ./ft_bzero.c \
	./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c \
	./ft_isprint.c ./ft_itoa.c\
	./ft_lstnew.c ./ft_lstdelone.c ./ft_lstdel.c ./ft_lstadd.c ./ft_lstiter.c\
	./ft_lstmap.c\
	./ft_memalloc.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c \
	./ft_memcpy.c ./ft_memdel.c ./ft_memmove.c ./ft_memset.c \
	./ft_putchar_fd.c ./ft_putchar.c ./ft_putendl_fd.c \
	./ft_putendl.c ./ft_putnbr_fd.c ./ft_putnbr.c \
	./ft_putstr_fd.c ./ft_putstr.c \
	./ft_strcat.c ./ft_strchr.c ./ft_strcmp.c ./ft_strcpy.c  \
	./ft_strdup.c ./ft_strlcat.c ./ft_strlen.c ./ft_strncat.c \
	./ft_strncmp.c ./ft_strncpy.c ./ft_strnstr.c ./ft_strrchr.c\
	./ft_strstr.c ./ft_strdel.c ./ft_strnew.c ./ft_strmap.c\
	./ft_strclr.c ./ft_strequ.c ./ft_strnequ.c ./ft_strsub.c ./ft_strjoin.c\
	./ft_strtrim.c ./ft_strmapi.c ./ft_striter.c ./ft_striteri.c \
	./ft_strsplit.c\
	./ft_tolower.c ./ft_toupper.c \


OBJS = $(SRC:.c=.o)

all : $(NAME)


$(NAME) :
	$(CC) -c $(FLAGS) $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
