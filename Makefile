# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 14:21:06 by rroca-go          #+#    #+#              #
#    Updated: 2022/07/23 22:06:07 by rroca-go@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_substr.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
#	${CC} ${CFLAGS} -o ${NAME} ${OBJS}
	@ar rc $(NAME) ${OBJS}
	ranlib ${NAME}
	${RM} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

test: ${OBJS}
	@ar rc $(NAME) ${OBJS}
	ranlib ${NAME}
	${CC} ${CFLAGS} ${SRCS} -L. -lft && ./a.out

.PHONY:	all clean fclean re




# crear biblioteca
#ar rc libstr.a maintest.o test.o
# compilar en biblioteca
#gcc -Wall -Wectra -Werror maintes.o -L. -lstr
# crear index en biblioteca
#ranlib libstr.a




#SRCS	= test.c
#OBJS	= ${SRCS:.c=.o}
#NAME	= hellotest
#CC 		= cc
#RM  	= rm -f
#CFLAGS	=	-Wall -Wextra -Werror
#.c.o:
#		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
#${NAME}:${OBJS}
#		${CC} -o ${NAME} ${OBJS}
#		echo name
#all:	${NAME}
#		echo all
#clean:	${OBJS}
#		${RM} ${OBJS}
#fclean:	clean
#		${RM} ${NAME}
#re: 	fclean all
#.PHONY:	all clean fclean re



#SRCS	= test.c
#OBJS	= ${SRCS:.c=.o}
#hellotest:	${OBJS}
#		gcc -Wall -Wextra -Werror -o hellotest ${OBJS}



#SRCS	= test.c 
#OBJS	= ${SRCS:.c=.o}
#NAME	= hellotest
#CC		= gcc
#CFLAGS	= -Wall -Wextra -Werror -g
#.c.o:
#		${CC} ${CFLAGS} -c &< -o &{<:.c=.o}
#${NAME}:	${OBJS}
#		${CC} ${CFLAGS} -o ${NAME} ${OBJS}
#all:	${NAME}
