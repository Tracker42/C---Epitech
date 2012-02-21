
#include "AbstractInstruction.hh"

#include <Exception>

AbstractInstruction::AbstractInstruction() {

}

AbstractInstruction::~AbstractInstruction() {

}

void AbstractInstruction::initialize() {

}

void AbstractInstruction::finalize() {

}

void AbstractInstruction::addParam(std::string param) {
	throw BadParamException(param + " - no param");
}

void AbstractInstruction::operator ()() {
	return execute();
}
