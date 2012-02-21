
#include "OperandFactory.hh"

#include <algorithm>
#include <Exception>

OperandFactory::OperandFactory() {

}

OperandFactory::~OperandFactory() {

}

void OperandFactory::registerOperand(OperandHandlerInterface * handler) {
	map[handler->getType()] = handler;
}

OperandInterface * OperandFactory::createOperand(eOperandType type, const std::string & value) {
	if (map.find(type) != map.end()) {
		OperandHandlerInterface * handler = map[type];
		return handler->create(value);
	}
	throw OperandNotExistException();
}

std::list<std::string> OperandFactory::getListStringOperands() {
	std::list<std::string> list;
	std::map<eOperandType, OperandHandlerInterface *>::iterator iter = map.begin();
	while (iter != map.end()) {
		list.push_back((*iter).second->getName());
		iter++;
	}
	return list;
}

eOperandType OperandFactory::retrieveFromString(std::string & type) {
	std::map<eOperandType, OperandHandlerInterface *>::iterator iter = map.begin();
	while (iter != map.end()) {
		if ((*iter).second->getName() == type) {
			return (*iter).second->getType();
		}
		iter++;
	}
	return 0;
}
