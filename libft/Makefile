# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 14:51:39 by rpapyan           #+#    #+#              #
#    Updated: 2022/07/31 14:51:54 by rpapyan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRCS = 	   ft_strlen.c\
	   ft_bzero.c\
	   ft_tolower.c\
	   ft_calloc.c\
	   ft_itoa.c\

OBJS = $(SRCS:.c=.o)


CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

DEL = @rm -f

all: $(NAME)	

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	$(DEL) $(OBJS) $(BNS_OBJS)

fclean: clean
	$(DEL) $(NAME)

re: fclean $(NAME)

.SILENT:

.PHONY: all, clean, fclean, re
