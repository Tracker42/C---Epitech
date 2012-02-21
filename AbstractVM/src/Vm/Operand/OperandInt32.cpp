
#include "OperandInt32.hh"

#include <VMDef>

OperandInt32::OperandInt32(std::string value)
: AbstractOperand(value, OPERAND_INT32_PRECISION, OPERAND_INT32_TYPE) {

}

OperandInt32::~OperandInt32() {

}
