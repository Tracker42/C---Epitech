BIN	= my_cat
CC	= g++
RM	= rm -f

FLAGS	= -Wall -Wextra -Werror
CFLAGS	+= $(FLAGS)
LDFLAGS += $(FLAGS)

OBJ	= $(SRC:.cpp=.o)
SRC	= main.cpp

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(BIN)

re: fclean all

.cpp.o:
	$(CC) -c -o $@ $< $(CFLAGS)
