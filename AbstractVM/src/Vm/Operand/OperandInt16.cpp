
#include "OperandInt16.hh"

#include <VMDef>

OperandInt16::OperandInt16(std::string value)
: AbstractOperand(value, OPERAND_INT16_PRECISION, OPERAND_INT16_TYPE) {

}

OperandInt16::~OperandInt16() {

}
