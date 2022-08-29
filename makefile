SRCS = push.c shiftdown.c shiftup.c swap.c push_swap.c tchekarg.c petitalgo.c radix.c free.c

PRINTF_A 		= ./printf/libftprintf.a

PRINTF			= ./printf

NAME			= push_swap

RM				= rm -f

CC				= gcc

CFLAGS			= -Wall -Wextra -Werror 

all:		${NAME}

$(NAME): $(SRCS) ${PRINTF_A}
	$(CC) $(CFLAGS) $(SRCS) ${PRINTF_A} -o ${NAME}

${PRINTF_A}:
	make -C ${PRINTF}

clean:		
			make clean -C ${PRINTF}

fclean:		clean
			${RM} ${NAME}
			make fclean -C ${PRINTF}

re:			fclean all