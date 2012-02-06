BIN	= my_convert_temp
CC	= g++
RM	= rm -f

FLAGS	= -W -Wall -Werror
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
