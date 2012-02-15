
#include "InstructionExit.hh"

InstructionExit::InstructionExit() {

}

InstructionExit::~InstructionExit() {

}

void InstructionExit::operator ()(Core * core) {
	core->getMemory()->exit();
}
