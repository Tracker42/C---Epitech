
#include "InstructionAssert.hh"

#include <Exception>

InstructionAssert::InstructionAssert() {

}

InstructionAssert::~InstructionAssert() {

}

void InstructionAssert::execute() {
	if (operand->toString() != AbstractVM::getInstance()->getPile()->get()->toString()) {
		throw StopException(std::string("Assert with ") + operand->toString());
	}
}
