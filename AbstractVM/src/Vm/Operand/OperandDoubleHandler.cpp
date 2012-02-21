
#include "OperandDoubleHandler.hh"

#include <VMDef>
#include "OperandDouble.hh"

OperandDoubleHandler::OperandDoubleHandler()
: AbstractOperandHandler(OPERAND_DOUBLE_PRECISION, OPERAND_DOUBLE_TYPE, OPERAND_DOUBLE_NAME) {

}

OperandDoubleHandler::~OperandDoubleHandler() {

}

OperandInterface * OperandDoubleHandler::create(const std::string & value) {
	return new OperandDouble(value);
}
