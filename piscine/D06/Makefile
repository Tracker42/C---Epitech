BIN	= test
CC	= g++
RM	= rm -f

FLAGS	= -W -Wall -Werror
CFLAGS	+= $(FLAGS)
LDFLAGS += $(FLAGS)

OBJ	= $(SRC:.cpp=.o)
SRC	= main.cpp \
	    ex02/sickkoala.cpp \
	    ex03/koalanurse.cpp \
	    ex04/koaladoctor.cpp \
	    ex05/sickkoalalist.cpp \
	    ex05/koalanurselist.cpp \
	    ex05/koaladoctorlist.cpp \
	    ex06/hopital.cpp

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
