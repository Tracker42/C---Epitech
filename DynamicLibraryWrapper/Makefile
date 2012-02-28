
LIB = libdlwrapper.so

CC = g++
RM = rm -rf

NAZI = -W -Wall -Werror -Wextra

CXXFLAGS += $(NAZI)
CXXFLAGS += -fPIC

LDFLAGS += -ldl
LDFLAGS += -shared

INCLUDE_DIR = includes
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib

SRC = \
	DLException.cpp \
	DLHandler.cpp \
	DLManager.cpp \
	DLSymbol.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(LIB)

$(LIB): $(OBJ)
	@mkdir -p $(LIB_DIR)
	$(CC) -o $(LIB_DIR)/$(LIB) $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) -o $@ -c $< $(CXXFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(LIB)
	$(RM) $(LIB_DIR)

re: fclean all
