
#include "OperandFloat.hh"

#include <cmath>
#include <VMDef>

OperandFloat::OperandFloat(std::string value)
: AbstractOperand(value, OPERAND_FLOAT_PRECISION, OPERAND_FLOAT_TYPE) {

}

OperandFloat::~OperandFloat() {

}

OperandInterface * OperandFloat::operator %(const OperandInterface& rhs) const {
	if (type < rhs.getType()) {
		return rhs + *this;
	}
	if (OperandFloat::stringToValue(rhs.toString())) {
		std::string result = OperandFloat::valueToString(fmod(value, OperandFloat::stringToValue(rhs.toString())));
		return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
	}
	throw StopException("Modulo by zero!");
}
