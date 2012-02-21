
#include "AbstractInstructionWithParams.hh"

#include <AbstractVM>
#include <Exception>

AbstractInstructionWithParams::AbstractInstructionWithParams() {

}

AbstractInstructionWithParams::~AbstractInstructionWithParams() {

}

void AbstractInstructionWithParams::finalize() {
	if (params.size() == 2) {
		std::list<std::string>::iterator iter = params.begin();
		OperandFactory * factory = AbstractVM::getInstance()->getOperandFactory();
		std::string type = *iter;
		iter++;
		std::string value = *iter;
		operand = factory->createOperand(factory->retrieveFromString(type), value);
		return;
	}
	throw BadParamException();
}

void AbstractInstructionWithParams::addParam(std::string param) {
	params.push_back(param);
}
