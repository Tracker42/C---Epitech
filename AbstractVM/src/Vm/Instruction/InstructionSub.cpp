
#include "InstructionSub.hh"

InstructionSub::InstructionSub() {

}

InstructionSub::~InstructionSub() {

}

void InstructionSub::execute() {
	PileInterface * pile = AbstractVM::getInstance()->getPile();
	OperandInterface * first = pile->get();
	pile->pop();
	OperandInterface * second = pile->get();
	pile->pop();
	pile->push(*first - *second);
}
