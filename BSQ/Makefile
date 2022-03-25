# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeblee <yeblee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 16:45:11 by yeblee            #+#    #+#              #
#    Updated: 2022/01/26 20:46:22 by yeblee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RFLAGS = rm -f

NAME = BSQ
INCS = includes
SRCS = srcs/bsq.c srcs/ft_common.c srcs/ft_error_msg.c srcs/ft_find.c srcs/ft_free.c srcs/ft_map.c srcs/ft_modified.c srcs/ft_print.c srcs/ft_read.c srcs/main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%o : %c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	$(RFLAGS) $(OBJS)
fclean: clean
	$(RFLAGS) $(NAME)

re: fclean all