
#include "OperandInt32Handler.hh"

#include <VMDef>
#include "OperandInt32.hh"

OperandInt32Handler::OperandInt32Handler()
: AbstractOperandHandler(OPERAND_INT32_PRECISION, OPERAND_INT32_TYPE, OPERAND_INT32_NAME) {

}

OperandInt32Handler::~OperandInt32Handler() {

}

OperandInterface * OperandInt32Handler::create(const std::string & value) {
	return new OperandInt32(value);
}
