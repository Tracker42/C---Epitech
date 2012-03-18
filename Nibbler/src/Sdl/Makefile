################################################################################
# Variables
################################################################################

NAME = lib_nibbler_sdl.so

CC = g++
RM = rm -rf

NAZI = -W -Wall -Werror -Wextra

CXXFLAGS += -I$(INCLUDE_DIR)
CXXFLAGS += -fPIC
CXXFLAGS += $(NAZI)

LDFLAGS += -shared -lSDL

INCLUDE_DIR = ../../includes
SRC_DIR = ../../src
OBJ_DIR = ../../obj
LIB_DIR = ../../lib

SRC = $(addprefix $(SRC_DIR)/Sdl/, \
	Sdl_Core.cpp \
	)

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:$(SRC_DIR)/%.cpp=%.o))

################################################################################
# Regles
################################################################################

all: $(OBJ) $(NAME)

$(NAME):
	$(CC) -o $(LIB_DIR)/$(NAME) $(OBJ) $(LDFLAGS)

$(OBJ_DIR)/%o: $(SRC_DIR)/%cpp
	@mkdir -p $(@D)
	$(CC) -o $@ -c $< $(CXXFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB_DIR)/$(NAME)

re: fclean all

.PHONY: $(NAME)

################################################################################
