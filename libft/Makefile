NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
RM = rm -f

SRCS =	ft_isalpha.c			\
		ft_isdigit.c			\
		ft_isalnum.c			\
		ft_isascii.c			\
		ft_isprint.c			\
		ft_toupper.c			\
		ft_tolower.c			\
		ft_memset.c				\
		ft_bzero.c				\
		ft_memcpy.c				\
		ft_memccpy.c			\
		ft_memmove.c			\
		ft_memchr.c				\
		ft_strlen.c				\
		ft_strlcpy.c			\
		ft_strlcat.c			\



#.c to .o
OBJ =		${SRCS:%.c=%.o}

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs	${NAME}		${OBJ}

%.o:		%.c
			${CC}	${CFLAGS}	$< -o $@

clean:
			${RM}	${OBJ}

fclean:		clean
			${RM}	${NAME}

re: fclean all


.PHONY: all clean fclean re

