
#include "OperandFloatHandler.hh"

#include <VMDef>
#include "OperandFloat.hh"

OperandFloatHandler::OperandFloatHandler()
: AbstractOperandHandler(OPERAND_FLOAT_PRECISION, OPERAND_FLOAT_TYPE, OPERAND_FLOAT_NAME) {

}

OperandFloatHandler::~OperandFloatHandler() {

}

OperandInterface * OperandFloatHandler::create(const std::string & value) {
	return new OperandFloat(value);
}
