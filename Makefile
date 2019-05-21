##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

RM		=	rm -f -r

NAME	=	corewar

OBJ		=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./include -g

LDFLAGS	=	-L./lib/my -lmy

SRC		=	main.c 						\
			src/my_flag.c 				\
			src/my_flag_2.c 			\
			src/my_flag_3.c 			\
			src/my_flag_4.c 			\
			src/essential/ess.c

$(NAME):	$(OBJ)
		make -C ./lib/my
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) -lncurses
		rm *.o
		rm */*.o
		rm */*/*.o
		rm lib/my/*.o

all:	$(NAME)

clean:
		$(RM) $(OBJ)
		$(RM) *~

fclean:		clean
		make -C ./lib/my fclean
		$(RM) $(NAME)

re:			fclean all
