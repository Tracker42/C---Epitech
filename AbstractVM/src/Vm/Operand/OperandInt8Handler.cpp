
#include "OperandInt8Handler.hh"

#include <VMDef>
#include "OperandInt8.hh"

OperandInt8Handler::OperandInt8Handler()
: AbstractOperandHandler(OPERAND_INT8_PRECISION, OPERAND_INT8_TYPE, OPERAND_INT8_NAME) {

}

OperandInt8Handler::~OperandInt8Handler() {

}

OperandInterface * OperandInt8Handler::create(const std::string & value) {
	return new OperandInt8(value);
}
