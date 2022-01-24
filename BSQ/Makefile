NAME = bsq
CC = gcc
CC_FLAGS = -c -Werror -Wall -Wextra
SOURCES = src/main.c src/common.c src/validation.c
OBJ = main.o validation.o ft_strlen.o ft_atoi.o ft_strdup.o

all: $ (NAME)

$(NAME):
	$(CC) $(CC_FLAGS) -I includes $(SOURCES)
	$(CC) -o $(NAME) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: fclean all grid
	./bsq grid.txt grid1.txt
	cat grid.txt | ./bsq
