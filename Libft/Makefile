NAME = libft.a

SRCS = $(wildcard ./libc/*.c) $(wildcard ./additional/*.c)

SRCSBONUS = $(wildcard ./bonus/*.c) 

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${SRCSBONUS:.c=.o} 

CC = gcc -Wall -Wextra -Werror

%.o: %.c libft.h
			${CC} -I. -c $< -o ${<:.c=.o}

all: 	${NAME}

${NAME}:	${OBJS} libft.h
				ar -rsc ${NAME} ${OBJS}

bonus:	${OBJSBONUS} libft.h
			ar -rsc ${NAME} ${OBJSBONUS}

clean:	
		rm -f ${OBJS} ${OBJSBONUS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
