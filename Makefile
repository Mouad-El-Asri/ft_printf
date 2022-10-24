# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 19:57:00 by moel-asr          #+#    #+#              #
#    Updated: 2022/10/24 03:39:03 by moel-asr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

SRCS = ft_printf.c \
	SRCS/ft_put_unsigned_int.c \
	SRCS/ft_putaddress.c \
	SRCS/ft_putchar.c \
	SRCS/ft_puthex.c \
	SRCS/ft_putnbr.c \
	SRCS/ft_putstr.c

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean