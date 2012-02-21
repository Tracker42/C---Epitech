
#include "InstructionCopy.hh"

InstructionCopy::InstructionCopy() {

}

InstructionCopy::~InstructionCopy() {

}

void InstructionCopy::execute() {
	OperandInterface * operand = AbstractVM::getInstance()->getPile()->get();
	OperandInterface * copy = AbstractVM::getInstance()->getOperandFactory()->createOperand(operand->getType(), operand->toString());
	AbstractVM::getInstance()->getPile()->push(copy);
}
