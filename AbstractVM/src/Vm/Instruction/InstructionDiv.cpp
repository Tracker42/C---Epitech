
#include "InstructionDiv.hh"

InstructionDiv::InstructionDiv() {

}

InstructionDiv::~InstructionDiv() {

}

void InstructionDiv::operator ()(Core * core) {
	core->getMemory()->div();
}
