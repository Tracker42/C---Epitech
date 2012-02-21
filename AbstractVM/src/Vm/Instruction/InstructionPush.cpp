
#include "InstructionPush.hh"

InstructionPush::InstructionPush() {

}

InstructionPush::~InstructionPush() {

}

void InstructionPush::execute() {
	AbstractVM::getInstance()->getPile()->push(operand);
}
