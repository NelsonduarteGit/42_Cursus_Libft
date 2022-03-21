# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nandre-f <nandre-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 11:19:42 by nandre-f          #+#    #+#              #
#    Updated: 2022/03/21 13:45:18 by nandre-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INS = libft.h
OBJS = $(SRCS:.c=.o)
BOBJS = ${BONUSES:.c=.o}

FLAGS = -Wall -Werror -Wextra
CC = gcc
LIB = ar rc
RM = rm -f
RL = ranlib

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c\
		ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstlast.c\
		ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
		ft_lstiter.c ft_lstmap.c ft_memccpy.c ft_split.c

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I.${INS}
	
${NAME}: ${OBJS}
		 ${LIB} ${NAME} ${OBJS}
		 ${RL} ${NAME}

all: ${NAME}

clean: 
	 ${RM} ${OBJS}
	 ${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}

bonus:			$(OBJS) $(BOBJS)
				ar rcs $(NAME) $(OBJS) $(BOBJS)

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY:	all clean fclean re
