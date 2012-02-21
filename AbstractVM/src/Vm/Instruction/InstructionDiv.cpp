
#include "InstructionDiv.hh"

InstructionDiv::InstructionDiv() {

}

InstructionDiv::~InstructionDiv() {

}

void InstructionDiv::execute() {
	PileInterface * pile = AbstractVM::getInstance()->getPile();
	OperandInterface * first = pile->get();
	pile->pop();
	OperandInterface * second = pile->get();
	pile->pop();
	pile->push(*first / *second);
}
