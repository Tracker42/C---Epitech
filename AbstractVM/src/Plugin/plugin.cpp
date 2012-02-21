
#include <AbstractVM>
#include <VMDef>

#include "Operand/OperandChar.hh"
#include "Operand/OperandCharHandler.hh"
#include "Exception/CharException.hh"
#include "Instruction/InstructionCopyHandler.hh"

extern "C" {

	void abstractvm_plugin(AbstractVM * vm) {
		OperandCharHandler * handler = new OperandCharHandler();
		std::string type = std::string(handler->getName());
		vm->getOperandFactory()->registerOperand(handler);
		dynamic_cast<ListTokenType *>(vm->getLexer()->getType(VM_TTOKEN_OPERAND))->addPattern(type);

		InstructionCopyHandler * instr = new InstructionCopyHandler();
		std::string tag = instr->getTag();
		vm->getInstructionFactory()->registerInstruction(instr);
		dynamic_cast<ListTokenType *>(vm->getLexer()->getType(VM_TTOKEN_INSTRUCTION))->addPattern(tag);
	}

}
