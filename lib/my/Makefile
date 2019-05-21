##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make the lib
##

RM		=	rm -f -r

NAME	=	libmy.a

OBJ		=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./../../include

SRC		=	my_strlen.c					\
			my_strstr.c					\
			my_strcmp.c					\
			my_strncmp.c				\
			my_free_tab.c 				\
			my_error.c 					\
			rm_space_and_tab.c 			\
			my_str_to_wordtab.c 		\
			clear_string2d.c

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

all:		$(NAME)

clean:
		$(RM) $(OBJ)
		$(RM) *~

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
