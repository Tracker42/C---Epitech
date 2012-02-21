
#include "InstructionFactory.hh"

#include <Exception>

InstructionFactory::InstructionFactory() {

}

InstructionFactory::~InstructionFactory() {

}

void InstructionFactory::registerInstruction(InstructionHandlerInterface * handler) {
	map[handler->getTag()] = handler;
}

InstructionInterface * InstructionFactory::createInstruction(std::string tag) {
	if (map.find(tag) != map.end()) {
		InstructionHandlerInterface * handler = map[tag];
		return handler->create();
	}
	throw InstructionNotExistException(tag);
}

std::list<std::string> InstructionFactory::getListStringInstructions() {
	std::list<std::string> list;
	std::map<std::string, InstructionHandlerInterface *>::iterator iter = map.begin();
	while (iter != map.end()) {
		list.push_back((*iter).first);
		iter++;
	}
	return list;
}
