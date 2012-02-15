
#include "InstructionPop.hh"

InstructionPop::InstructionPop() {

}

InstructionPop::~InstructionPop() {

}

void InstructionPop::operator ()(Core * core) {
	core->getMemory()->pop();
}
