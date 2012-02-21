
#include "InstructionPop.hh"

InstructionPop::InstructionPop() {

}

InstructionPop::~InstructionPop() {

}

void InstructionPop::execute() {
	AbstractVM::getInstance()->getPile()->pop();
}
