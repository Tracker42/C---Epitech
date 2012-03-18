################################################################################
# Variables
################################################################################

NAME = nibbler
QTLIB = lib_$(NAME)_qt.so
SDLLIB = lib_$(NAME)_sdl.so
GTKLIB = lib_$(NAME)_gtk.so
OGLLIB = lib_$(NAME)_ogl.so

PLUGIN = $(QTLIB) $(SDLLIB)

CC = g++
RM = rm -rf

NAZI = -W -Wall -Werror -Wextra

CXXFLAGS += -I$(INCLUDE_DIR)
CXXFLAGS += $(NAZI)

LDFLAGS += -ldl -rdynamic

INCLUDE_DIR = includes
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
PLUGIN_DIR = plugin
BIN_DIR = .

SRC = $(addprefix $(SRC_DIR)/, \
	Nibbler/Point.cpp \
	Nibbler/Element.cpp \
	Nibbler/Snake.cpp \
	Nibbler/Food.cpp \
	Nibbler/Nibbler.cpp \
	Controller/ControllerModel.cpp \
	main.cpp \
	)

ASRC = $(addprefix $(SRC_DIR)/Common/, \
	DlWrapper/DLException.cpp \
	DlWrapper/DLHandler.cpp \
	DlWrapper/DLManager.cpp \
	DlWrapper/DLSymbol.cpp \
	)

SRC += $(ASRC)

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:$(SRC_DIR)/%.cpp=%.o))

QT_SRC_DIR = src/Qt
SDL_SRC_DIR = src/Sdl

################################################################################
# Regles
################################################################################

all: $(NAME) $(PLUGIN)

qt: $(QTLIB)

sdl: $(SDLLIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) -o $@ -c $< $(CXXFLAGS)

$(QTLIB):
	cd src/Qt && qmake-qt4
	cd src/Qt && make

$(SDLLIB):
	cd $(SDL_SRC_DIR) && make

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(LIB_DIR)
	$(RM) $(PLUGIN_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: qt sdl

################################################################################
