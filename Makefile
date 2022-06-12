# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 01:25:36 by rpapyan           #+#    #+#              #
#    Updated: 2022/06/12 04:44:29 by rpapyan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

SRCS = ft_printf.c ft_printer.c 

CC = cc

CFLAGS = -Wall -Wextra -Werror

DEL = @rm -rf

all: $(NAME)	

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	$(DEL) $(OBJS)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
