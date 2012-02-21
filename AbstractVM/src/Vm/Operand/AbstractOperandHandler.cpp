
#include "AbstractOperandHandler.hh"

AbstractOperandHandler::AbstractOperandHandler(int precision, eOperandType type, std::string name)
: precision(precision), type(type), name(name) {

}

AbstractOperandHandler::~AbstractOperandHandler() {

}

int AbstractOperandHandler::getPrecision() const {
	return precision;
}

eOperandType AbstractOperandHandler::getType() const {
	return type;
}

const std::string & AbstractOperandHandler::getName() const {
	return name;
}
