# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rroca-go <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 14:21:06 by rroca-go          #+#    #+#              #
#    Updated: 2022/06/18 14:21:11 by rroca-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS	= *.c

OBJS	= ${SRCS:.c=.o}

NAME	= hellotest

RM  	= rm -f

all:	${OBJS}
		cc -Wall -Werror -Wextra -o ${NAME} ${OBJS}
		./${NAME}

.PHONY:	all clean fclean re


ar rc libstr.a maintest.o test.o





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



