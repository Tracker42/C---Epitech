
#include "InstructionDump.hh"

InstructionDump::InstructionDump() {

}

InstructionDump::~InstructionDump() {

}

void InstructionDump::execute() {
	AbstractVM::getInstance()->getPile()->dump();
}
