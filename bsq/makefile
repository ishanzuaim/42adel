
SRC = main.c parse_map.c read_file.c map_util.c str_util.c find_square.c square_helper.c read_stdin.c

NAME = bsq

OBJS = ${SRC:.c=.o}

CC = cc

CFLAGS = -g -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	$(CC) ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${NAME}

fclean: clean
	rm -f ${OBJS}

re: fclean all