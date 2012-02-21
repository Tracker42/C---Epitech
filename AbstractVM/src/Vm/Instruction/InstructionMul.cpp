
#include "InstructionMul.hh"

InstructionMul::InstructionMul() {

}

InstructionMul::~InstructionMul() {

}

void InstructionMul::execute() {
	PileInterface * pile = AbstractVM::getInstance()->getPile();
	OperandInterface * first = pile->get();
	pile->pop();
	OperandInterface * second = pile->get();
	pile->pop();
	pile->push(*first * *second);
}
