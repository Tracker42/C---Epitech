
#include "InstructionAdd.hh"

InstructionAdd::InstructionAdd() {

}

InstructionAdd::~InstructionAdd() {

}

void InstructionAdd::execute() {
	PileInterface * pile = AbstractVM::getInstance()->getPile();
	OperandInterface * first = pile->get();
	pile->pop();
	OperandInterface * second = pile->get();
	pile->pop();
	pile->push(*first + *second);
}
