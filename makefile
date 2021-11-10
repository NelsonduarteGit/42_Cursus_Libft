NAME = libft.a
INS = libft.h
OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra
CC = gcc
LIB = ar rc
RM = rm -f
RL = ranlib

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I.${INS}

${NAME}: ${OBJS}
		 ${LIB} ${NAME} ${OBJS}
		 ${RL} ${NAME}

all: ${NAME}

clean: 
	 ${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re
