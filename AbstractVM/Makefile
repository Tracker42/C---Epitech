
NAME = AbstractVM
PLUGIN = libavmextend.so

CC = g++
RM = rm -rf

NAZI = -W -Wall -Werror -Wextra

CXXFLAGS += -I$(INCLUDE_DIR)
CXXFLAGS += $(NAZI)

LDFLAGS += -ldl -rdynamic

INCLUDE_DIR = includes
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = .

PARSER_SRC = \
	Parser/Lexer/BasicCutter.cpp \
	Parser/Lexer/Lexer.cpp \
	Parser/Parser/Parser.cpp \
	Parser/Parser/SyntaxAnalyzer.cpp \
	Parser/Token/BasicTokenType.cpp \
	Parser/Token/ListTokenType.cpp \
	Parser/Token/Token.cpp

VM_SRC = \
	Vm/Core/Core.cpp \
	Vm/Core/SegmentCode.cpp \
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

OPE_SRC = \
	Vm/Operand/OperandInt8.cpp \
	Vm/Operand/OperandInt16.cpp \
	Vm/Operand/OperandInt32.cpp \
	Vm/Operand/OperandFloat.cpp \
	Vm/Operand/OperandDouble.cpp \
	Vm/Operand/AbstractOperandHandler.cpp \
	Vm/Operand/OperandInt8Handler.cpp \
	Vm/Operand/OperandInt16Handler.cpp \
	Vm/Operand/OperandInt32Handler.cpp \
	Vm/Operand/OperandFloatHandler.cpp \
	Vm/Operand/OperandDoubleHandler.cpp \
	Vm/Operand/OperandFactory.cpp

EXCEPT_SRC = \
	Exception/AbstractVMException.cpp \
	Exception/BadParamException.cpp \
	Exception/InstructionNotExistException.cpp \
	Exception/OperandNotExistException.cpp \
	Exception/OperandException.cpp \
	Exception/PileException.cpp \
	Exception/ParserException.cpp \
	Exception/PluginException.cpp \
	Exception/StopException.cpp \
	Exception/ExitException.cpp \
	Exception/SyntaxException.cpp \
	Exception/OverflowException.cpp

SRC += $(PARSER_SRC)
SRC += $(VM_SRC)
SRC += $(INSTR_SRC)
SRC += $(OPE_SRC)
SRC += $(EXCEPT_SRC)
SRC += main.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))


PLUGIN_SRC = \
	Plugin/Instruction/InstructionCopy.cpp \
	Plugin/Instruction/InstructionCopyHandler.cpp \
	Plugin/Operand/OperandChar.cpp \
	Plugin/Operand/OperandCharHandler.cpp \
	Plugin/Exception/CharException.cpp \
	Plugin/plugin.cpp

PLUGIN_OBJ = $(addprefix $(OBJ_DIR)/, $(PLUGIN_SRC:.cpp=.o))

PLUGIN_CXXFLAGS += $(CXXFLAGS)
PLUGIN_CXXFLAGS += -fPIC

PLUGIN_LDFLAGS += $(LDFLAGS)
PLUGIN_LDFLAGS += -shared

################################################################################

all: $(NAME) $(PLUGIN)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

$(PLUGIN): $(PLUGIN_OBJ)
	$(CC) -o $(PLUGIN) $(PLUGIN_OBJ) $(PLUGIN_LDFLAGS)

$(OBJ_DIR)/Plugin/%.o: $(SRC_DIR)/Plugin/%.cpp
	@mkdir -p $(@D)
	$(CC) -o $@ -c $< $(PLUGIN_CXXFLAGS)

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
