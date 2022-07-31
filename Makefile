# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 14:50:02 by rpapyan           #+#    #+#              #
#    Updated: 2022/07/31 14:50:06 by rpapyan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#LIBFT = ./libft/libft.a

SRCS = ft_printf.c\
       ft_printer.c\

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

AR = ar csr

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	$(MAKE) -C ./libft
	cp ./libft/libft.a $(NAME)
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	$(MAKE) clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	$(MAKE) fclean -C ./libft
	${RM} ${NAME}

re: fclean all

.SILENT:

.PHONY: all clean fclean bonus re .c.o

