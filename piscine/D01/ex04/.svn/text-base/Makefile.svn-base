
BIN	= menger_face
CC	= gcc
RM	= rm -f

CFLAGS	= -Wextra -Werror -Wall -std=gnu99

OBJ	= $(SRC:.c=.o)
SRC	= bitmap_header.c \
	    drawing.c \
	    menger.c \
	    main.c

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(BIN)

re: fclean all
