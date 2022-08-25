# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 14:21:06 by rroca-go          #+#    #+#              #
#    Updated: 2022/08/25 18:15:37 by rroca-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

SRCB	= ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c

OBJB	= ${SRCB:.c=.o}

NAME	= libft.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	@ar rc $(NAME) ${OBJS}
	ranlib ${NAME}

all:	${NAME}

bonus:	${OBJB}
	@ar rc ${NAME} ${OBJB}
	ranlib ${NAME}

clean:
	${RM} ${OBJS} ${OBJB}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

test: ${OBJS}
	@ar rc $(NAME) ${OBJS}
	ranlib ${NAME}
	${CC} ${CFLAGS} ${SRCS} -L. -lft && ./a.out

.PHONY:	all clean fclean re bonus


# crear biblioteca
#ar rc libstr.a maintest.o test.o
# compilar en biblioteca
#gcc -Wall -Wectra -Werror maintes.o -L. -lstr
# crear index en biblioteca
#ranlib libstr.a

