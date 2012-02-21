
#include "OperandChar.hh"

#include "../Exception/CharException.hh"

OperandChar::OperandChar(std::string value)
: AbstractOperand("", OPERAND_CHAR_PRECISION, OPERAND_CHAR_TYPE) {
	if (value.size() == 1) {
		string = value;
	}
	else if (value[0] == '\'') {
		if (value.size() != 3 || value[2] != '\'') {
			throw CharException(std::string("Char operand ") + value + " incorrect");
		}
		string = value.substr(1, 1);
	}
	else {
		size_t i = 0;
		while (i < value.size()) {
			if (!isdigit(value[i])) {
				throw CharException(std::string("Char operand ") + value + " incorrect");
			}
			i++;
		}
		std::stringstream ss;
		int ch;
		ss << value;
		ss >> ch;
		string.assign(1, ch);
	}
}

OperandChar::~OperandChar() {

}

std::string OperandChar::toString() const {
	return string;
}

OperandInterface * OperandChar::operator +(const OperandInterface & rhs) const {
	throw CharException("Cannot excecute '+' operator in operand <char>");
	(void) rhs;
}

OperandInterface * OperandChar::operator -(const OperandInterface & rhs) const {
	throw CharException("Cannot excecute '-' operator in operand <char>");
	(void) rhs;
}

OperandInterface * OperandChar::operator *(const OperandInterface & rhs) const {
	throw CharException("Cannot excecute '*' operator in operand <char>");
	(void) rhs;
}

OperandInterface * OperandChar::operator /(const OperandInterface & rhs) const {
	throw CharException("Cannot excecute '/' operator in operand <char>");
	(void) rhs;
}

OperandInterface * OperandChar::operator %(const OperandInterface & rhs) const {
	throw CharException("Cannot excecute '%' operator in operand <char>");
	(void) rhs;
}
