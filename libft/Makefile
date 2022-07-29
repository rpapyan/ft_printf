# **************************************************************************** #
#                                                                             :: #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpapyan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 04:29:53 by rpapyan           #+#    #+#              #
#    Updated: 2022/07/13 23:39:34 by rpapyan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#ft_itoa.c\#

CC = cc

SRCS = ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_strlen.c\
	   ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strncmp.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_calloc.c\
	   ft_strdup.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_split.c\
	   ft_itoa.c\
	   ft_strmapi.c\
	   ft_striteri.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

BNS_SRCS = ft_lstnew.c\
		   ft_lstadd_front.c\
		   ft_lstsize.c\
		   ft_lstlast.c\
		   ft_lstadd_back.c\
		   ft_lstdelone.c\
		   ft_lstclear.c\
		   ft_lstiter.c\
		   ft_lstmap.c\

BNS_OBJS = $(BNS_SRCS:.c=.o)

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

bonus: $(OBJS) $(BNS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BNS_OBJS)

.SILENT:

.PHONY: all, clean, fclean, re
