
NAME = AbstractVM
PLUGIN = libavmextend.so

CC = g++
RM = rm -rf

NAZI = -W -Wall -Werror -Wextra

CXXFLAGS += -I$(INCLUDE_DIR)
CXXFLAGS += $(NAZI)

LDFLAGS +=

INCLUDE_DIR = includes
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = .

PARSER_SRC = \
	Parser/Lexer/BasicCutter.cpp \
	Parser/Lexer/Lexer.cpp \
	Parser/Parser/Parser.cpp \
	Parser/Token/BasicTokenType.cpp \
	Parser/Token/ListTokenType.cpp \
	Parser/Token/Token.cpp

VM_SRC = \
	Vm/Core/Core.cpp \
	Vm/IO/OutFile.cpp \
	Vm/IO/OutTerminal.cpp \
	Vm/Memory/Pile.cpp \
	AbstractVM.cpp

INSTR_SRC = \
	Vm/Instruction/AbstractInstruction.cpp \
	Vm/Instruction/AbstractInstructionWithParams.cpp \
	Vm/Instruction/InstructionAdd.cpp \
	Vm/Instruction/InstructionAssert.cpp \
	Vm/Instruction/InstructionDiv.cpp \
	Vm/Instruction/InstructionDump.cpp \
	Vm/Instruction/InstructionExit.cpp \
	Vm/Instruction/InstructionMod.cpp \
	Vm/Instruction/InstructionMul.cpp \
	Vm/Instruction/InstructionPop.cpp \
	Vm/Instruction/InstructionPrint.cpp \
	Vm/Instruction/InstructionPush.cpp \
	Vm/Instruction/InstructionSub.cpp \
	Vm/Instruction/AbstractInstructionHandler.cpp \
	Vm/Instruction/InstructionAddHandler.cpp \
	Vm/Instruction/InstructionAssertHandler.cpp \
	Vm/Instruction/InstructionDivHandler.cpp \
	Vm/Instruction/InstructionDumpHandler.cpp \
	Vm/Instruction/InstructionExitHandler.cpp \
	Vm/Instruction/InstructionModHandler.cpp \
	Vm/Instruction/InstructionMulHandler.cpp \
	Vm/Instruction/InstructionPopHandler.cpp \
	Vm/Instruction/InstructionPrintHandler.cpp \
	Vm/Instruction/InstructionPushHandler.cpp \
	Vm/Instruction/InstructionSubHandler.cpp \
	Vm/Instruction/InstructionFactory.cpp

OPE_SRC =

SRC += $(PARSER_SRC)
SRC += $(VM_SRC)
SRC += $(INSTR_SRC)
SRC += $(OPE_SRC)
SRC += main.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))


PLUGIN_SRC =

PLUGIN_OBJ = $(addprefix $(OBJ_DIR)/, $(PLUGIN_SRC:.cpp=.o))

PLUGIN_LDFLAGS =

################################################################################

all: $(NAME) $(PLUGIN)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

$(PLUGIN): $(PLUGIN_OBJ)
	$(CC) -o $(PLUGIN) $(PLUGIN_OBJ) $(PLUGIN_LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) -o $@ -c $< $(CXXFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(PLUGIN_OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(PLUGIN)
	$(RM) $(OBJ_DIR)

re: fclean all
