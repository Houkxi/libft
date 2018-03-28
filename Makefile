# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 11:58:31 by mmanley           #+#    #+#              #
#    Updated: 2018/03/28 12:46:11 by mmanley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

INC = includes/

OBJ_INC = ../includes

OBJ_PATH = objs/

SRC_PATH = srcs/

SRC_L = lst_ch/

SRC_P = put/

SRC_S = strs/

SRC_M = mems/

SRC_N = nbrs/

RED = \x1b[31m

GREEN = \x1b[32m

include nbrs/make.dep
include mems/make.dep
include lst_ch/make.dep
include srcs/make.dep
include strs/make.dep
include put/make.dep

OBJS_NAME =	$(SRCS:%.c=%.o)

OBJS = $(addprefix $(OBJ_PATH), $(OBJS_NAME))

all : $(NAME)

$(NAME) : objs $(OBJS)
	@make -C ft_printf
	@cp ft_printf/libftprintf.a ./libft.a
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\n${GREEN}Library build finished"

$(OBJ_PATH)%.o: %.c
	@./dot.sh .
	@$(CC) $(FLAGS) -o $@ -c $< -I $(INC)

objs:
	@mkdir -p objs
	@mkdir -p objs/mems
	@mkdir -p objs/nbrs
	@mkdir -p objs/lst_ch
	@mkdir -p objs/strs
	@mkdir -p objs/srcs
	@mkdir -p objs/put

clean :
	@cd ft_printf && $(MAKE) clean && cd ..
	@rm -rf objs
	@rm -rf $(OBJS_PATH)

fclean : clean
	@cd ft_printf && $(MAKE) fclean && cd ..
	@rm -rf $(NAME)
	@echo "${RED}Wanted files deleted : .a & .o"
	@echo  "${GREEN}"

re : fclean all
