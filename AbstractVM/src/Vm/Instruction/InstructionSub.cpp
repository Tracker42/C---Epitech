
#include "InstructionSub.hh"

InstructionSub::InstructionSub() {

}

InstructionSub::~InstructionSub() {

}

void InstructionSub::operator ()(Core * core) {
	core->getMemory()->sub();
}
