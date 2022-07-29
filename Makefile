# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 01:25:36 by rpapyan           #+#    #+#              #
#    Updated: 2022/07/29 15:24:06 by rpapyan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

SRCS = ft_printf.c ft_printer.c 

CC = cc

CFLAGS = -Wall -Wextra -Werror

DEL = @rm -rf

all: $(NAME)	

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp ./libft/libft.a $(NAME)
	$(CC) $(CFLAGS) -c -I./libft ft_printf.h $(SRCS)	
	@ar rcs $(NAME) $(OBJS)

clean:
	$(DEL) $(OBJS)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

test:
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) -I./libft -L./libft -lft *.c ft_printf.h
	@./a.out
	@make fclean
	@$(MAKE) fclean -C ./libft
	@rm a.out
.PHONY: all, clean, fclean, re, test
