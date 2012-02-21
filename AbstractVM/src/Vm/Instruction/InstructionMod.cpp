
#include "InstructionMod.hh"

InstructionMod::InstructionMod() {

}

InstructionMod::~InstructionMod() {

}

void InstructionMod::execute() {
	PileInterface * pile = AbstractVM::getInstance()->getPile();
	OperandInterface * first = pile->get();
	pile->pop();
	OperandInterface * second = pile->get();
	pile->pop();
	pile->push(*first % *second);
}
