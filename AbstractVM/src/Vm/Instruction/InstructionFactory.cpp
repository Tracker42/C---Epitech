
#include "InstructionFactory.hh"

InstructionFactory::InstructionFactory() {

}

InstructionFactory::~InstructionFactory() {

}

void InstructionFactory::registerInstruction(InstructionHandlerInterface* handler) {
	map[handler->getTag()] = handler;
}

InstructionInterface * InstructionFactory::createInstruction(std::string tag) {
	InstructionHandlerInterface * handler = map[tag];
	if (handler) {
		return handler->create();
	}
	throw InstructionNotExistException(tag);
}

std::list<std::string> InstructionFactory::getListStringInstructions() {
	
}
