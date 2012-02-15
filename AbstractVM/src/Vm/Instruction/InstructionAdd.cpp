
#include "InstructionAdd.hh"

InstructionAdd::InstructionAdd() {

}

InstructionAdd::~InstructionAdd() {

}

void InstructionAdd::operator ()(Core * core) {
	core->getMemory()->add();
}
