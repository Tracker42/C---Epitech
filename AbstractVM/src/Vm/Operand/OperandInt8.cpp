
#include "OperandInt8.hh"

#include <VMDef>

OperandInt8::OperandInt8(const std::string & value)
: AbstractOperand(value, OPERAND_INT8_PRECISION, OPERAND_INT8_TYPE) {

}

OperandInt8::~OperandInt8() {

}

template<>
char AbstractOperand<char>::stringToValue(std::string string) {
	int c;
	std::stringstream ss;
	ss << string;
	ss >> c;
	return (char) c;
}

template<>
std::string AbstractOperand<char>::valueToString(char value) {
	std::string string;
	std::stringstream ss;
	ss << (int) value;
	ss >> string;
	return string;
}
