
#include "InstructionPrint.hh"

InstructionPrint::InstructionPrint() {

}

InstructionPrint::~InstructionPrint() {

}

void InstructionPrint::operator ()(Core * core) {
	core->getMemory()->print();
}
