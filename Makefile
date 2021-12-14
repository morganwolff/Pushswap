##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	= 	push_swap

SRC	=	src/main.c					\
		src/display_list.c			\
		lib/my_getnbr.c				\
		lib/my_put_nbr.c			\
		lib/my_putstr.c 			\
		lib/my_putchar.c 			\
		lib/my_swap.c 				\
		lib/my_printf.c 			\
		src/init.c 					\
		src/swap.c 					\
		src/push.c 					\
		src/rotate_first_end.c 		\
		src/rotate_end_first.c 		\
		src/my_params_to_list.c		\
		src/my_put_in_list.c 		\
		src/sort.c 					\

OBJ		=	$(SRC:.c=.o)

CFLAGS 	= 	-Wall -Wextra -I./include -g

all:		$(NAME)

$(NAME): 	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean:
		rm -f *.c~
		rm -f src/*.o
		rm -f lib/*.o

fclean: clean
		rm  -f $(NAME)

re:		fclean all
