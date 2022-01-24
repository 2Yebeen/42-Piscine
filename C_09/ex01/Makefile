# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/23 13:17:02 by yeblee            #+#    #+#              #
#    Updated: 2022/01/23 16:13:15 by yeblee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a

INCS = includes/ft.h
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rcs $@ $^
.c.o :
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re : fclean all
