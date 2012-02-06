BIN	= test
CC	= g++
RM	= rm -f

FLAGS	= -W -Wall -Werror
CFLAGS	+= $(FLAGS)
LDFLAGS += $(FLAGS)

OBJ	= $(SRC:.cpp=.o)
SRC	= main.cpp \
	    ex00/Character.cpp \
	    ex00/Warrior.cpp \
	    ex00/Mage.cpp \
	    ex00/Priest.cpp \
	    ex00/Paladin.cpp \
	    ex00/Hunter.cpp

all: $(BIN) clean

$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(BIN)

re: fclean all

.cpp.o:
	$(CC) -c -o $@ $< $(CFLAGS)
