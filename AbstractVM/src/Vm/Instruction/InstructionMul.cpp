
#include "InstructionMul.hh"

InstructionMul::InstructionMul() {

}

InstructionMul::~InstructionMul() {

}

void InstructionMul::operator ()(Core * core) {
	core->getMemory()->mul();
}
