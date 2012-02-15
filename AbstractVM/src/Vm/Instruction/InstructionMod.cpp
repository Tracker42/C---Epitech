
#include "InstructionMod.hh"

InstructionMod::InstructionMod() {

}

InstructionMod::~InstructionMod() {

}

void InstructionMod::operator ()(Core * core) {
	core->getMemory()->mod();
}
