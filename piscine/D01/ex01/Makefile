
BIN	= menger
CC	= gcc
RM	= rm -f

CFLAGS	= -Wextra -Werror -Wall -std=gnu99

OBJ	= $(SRC:.c=.o)
SRC	= menger.c \
	    main.c

all: $(BIN)

$(BIN): $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(BIN)

re: fclean all
