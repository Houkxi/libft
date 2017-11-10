# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 11:58:31 by mmanley           #+#    #+#              #
#    Updated: 2017/11/10 17:19:12 by mmanley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = comp

CC = gcc

LIB = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ./main.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memccpy.c \
		./ft_memmove.c ./ft_memchr.c ./ft_memcmp.c ./ft_strlen.c \
		./ft_strdup.c ./ft_strcpy.c ./ft_strncpy.c ./ft_strcat.c \
		./ft_strncat.c ./ft_strlcat.c ./ft_strchr.c ./ft_strrchr.c \
		./ft_strstr.c ./ft_strnstr.c ./ft_strcmp.c ./ft_strncmp.c \
		./ft_atoi.c ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c \
		./ft_isascii.c ./ft_isprint.c ./ft_toupper.c ./ft_tolower.c

OBJS = main.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o \
		ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o \
		ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
		ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o \
		ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o \
		ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
		ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o

all : $(NAME)

$(NAME) : $(LIB)
	$(CC) -o $(NAME) $(SRC) $(FLAGS)

$(LIB) : $(OBJS)
	ar rc $(LIB) $(OBJS)

$(OBJS) :
		$(CC) -c $(SRC)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -rf $(NAME) $(LIB)

re : fclean all
