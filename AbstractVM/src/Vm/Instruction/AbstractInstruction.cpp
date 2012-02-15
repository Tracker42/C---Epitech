
#include "AbstractInstruction.hh"

AbstractInstruction::AbstractInstruction() {

}

AbstractInstruction::~AbstractInstruction() {

}

void AbstractInstruction::initialize() {

}

void AbstractInstruction::finalize() {
	
}

void AbstractInstruction::addParam(std::string param) {
	(void) param;
	throw std::exception();
}
