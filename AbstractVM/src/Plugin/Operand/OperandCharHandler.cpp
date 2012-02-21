
#include "OperandCharHandler.hh"

#include "OperandChar.hh"

OperandCharHandler::OperandCharHandler()
: AbstractOperandHandler(OPERAND_CHAR_PRECISION, OPERAND_CHAR_TYPE, OPERAND_CHAR_NAME) {

}

OperandCharHandler::~OperandCharHandler() {

}

OperandInterface * OperandCharHandler::create(const std::string & value) {
	return new OperandChar(value);
}
