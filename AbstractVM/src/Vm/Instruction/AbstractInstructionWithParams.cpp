
#include "AbstractInstructionWithParams.hh"

AbstractInstructionWithParams::AbstractInstructionWithParams() {

}

AbstractInstructionWithParams::~AbstractInstructionWithParams() {

}

void AbstractInstructionWithParams::finalize() {
	if (params.size() == 2) {
		std::list<std::string>::iterator iter = params.begin();
		operand = Vm::getInstance()->getOperandFactory()->create(*iter);
		operand->setValue(*(iter++));
	}
	throw std::exception();
}

void AbstractInstructionWithParams::addParam(std::string param) {
	params.push_back(param);
}
