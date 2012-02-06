
DEBUG="yes"

########project folders
LIB_DIR =       lib
INCLUDE_DIR =   include
SRC_DIR =       src
OBJ_DIR =       obj
BIN_DIR =	.

########Binary name
NAME = PowerXmasGiftFactoryOfWalkingDeathInTheLandOfRadioactiveGnuZombiTransportingBigFatAssRedJacketLongBeardOldJerk
PN_NAME = petitPapaNoel

SRC = main.cpp \
	Objet/Carton.cpp\
	Objet/Emballage.cpp\
	Objet/Jouet.cpp\
	Objet/Nounours.cpp\
	Objet/Objet.cpp\
	Objet/PapierCadeau.cpp\
	Objet/PetitPoney.cpp\
	Chaine/AbstractTable.cpp\
	Chaine/TablePePeNoel.cpp\
	Chaine/ATapisRoulant.cpp\
	Chaine/TapisRoulantPePeNoel.cpp\
	Chaine/TapisRoulantAleat.cpp\
	Chaine/TableAleat.cpp\
	Sender/SendFile.cpp\
	Sender/SendFileStrategyUnique.cpp\
	Sender/SendManager.cpp\
	Sender/SendTerm.cpp\
	Xml/Xml.cpp\
	Factory/XmlObjetFactory.cpp\
	Logger/Logger.cpp\
	Elf/Elf.cpp \
	FunctionnalTest.cpp

PN_SRC = perenoel.cpp\
        Objet/Carton.cpp\
        Objet/Emballage.cpp\
        Objet/Jouet.cpp\
        Objet/Nounours.cpp\
        Objet/Objet.cpp\
        Objet/PapierCadeau.cpp\
        Objet/PetitPoney.cpp\
	        Xml/Xml.cpp\
        Factory/XmlObjetFactory.cpp

########binaries to use for compilation/erase
CC = g++
RM =            rm -rf

########compilation flags
CXXFLAGS += -Wall -Werror -Wextra
CXXFLAGS += -I$(INCLUDE_DIR)
ifeq ($(DEBUG),"yes")
CXXFLAGS += -g
endif

########temporary files list
OBJ =           $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
PN_OBJ =           $(addprefix $(OBJ_DIR)/, $(PN_SRC:.cpp=.o))

all:     $(NAME) $(PN_NAME)
ifneq ($(DEBUG),"yes")
	@echo cleaning project
	@$(RM) $(OBJ) $(PN_OBJ) $(OBJ_DIR)
	@echo $^ release version.
endif

########generate binary
$(NAME):        $(OBJ)
	@echo generate $@ in folder :  $(BIN_DIR)
	@mkdir -p $(BIN_DIR)
	@$(CC) $^ -o $(BIN_DIR)/$@ $(LDFLAGS)
	@echo *************************KREOG**************************

$(PN_NAME) : $(PN_OBJ)
	@echo generate $@ in folder :  $(BIN_DIR)
	@mkdir -p $(BIN_DIR)
	@$(CC) $^ -o $(BIN_DIR)/$@ $(LDFLAGS)
	@echo *************************NOWEL**************************


########generate object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo making $@
	@mkdir -p $(@D)
	@echo compiling $< in $@
	@$(CC) -o $@ -c $< $(CXXFLAGS)

########clean objects
clean:
	@echo cleaning objects
	@$(RM) $(OBJ)

########clean all build files$
fclean:         clean
	@echo cleaning all
	@rm -Rf $(OBJ_DIR)/*
	@$(RM) $(NAME)
	@echo **************************GOERK*************************
re: fclean all

.PHONY: all clean fclean re