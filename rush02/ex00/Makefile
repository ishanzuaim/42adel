
CC = cc
CFLAGS = -Wall -Wextra -Werror


_DEPS = ft_header.h

NAME = rush-02
SRCS = file_reader.c ft_realloc.c main.c number_utilities.c parse_number.c print_numbers.c string_utilities.c validate_input.c
OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		rm -f ${OBJS} 

fclean: clean
	rm -f ${NAME}

.PHONY: all clean fclean
