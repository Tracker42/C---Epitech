
#include "OperandInt16Handler.hh"

#include <VMDef>
#include "OperandInt16.hh"

OperandInt16Handler::OperandInt16Handler()
: AbstractOperandHandler(OPERAND_INT16_PRECISION, OPERAND_INT16_TYPE, OPERAND_INT16_NAME) {

}

OperandInt16Handler::~OperandInt16Handler() {

}

OperandInterface * OperandInt16Handler::create(const std::string & value) {
	return new OperandInt16(value);
}
