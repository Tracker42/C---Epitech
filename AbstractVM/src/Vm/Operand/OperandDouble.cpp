
#include "OperandDouble.hh"

#include <cmath>
#include <VMDef>

OperandDouble::OperandDouble(std::string value)
: AbstractOperand(value, OPERAND_DOUBLE_PRECISION, OPERAND_DOUBLE_TYPE) {

}

OperandDouble::~OperandDouble() {

}

OperandInterface * OperandDouble::operator %(const OperandInterface& rhs) const {
	if (type < rhs.getType()) {
		return rhs + *this;
	}
	if (OperandDouble::stringToValue(rhs.toString())) {
		std::string result = OperandDouble::valueToString(fmod(value, OperandDouble::stringToValue(rhs.toString())));
		return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
	}
	throw StopException("Modulo by zero!");
}
