
#include "InstructionPrint.hh"

#include <sstream>
#include <AbstractVM>
#include <Exception>

InstructionPrint::InstructionPrint() {

}

InstructionPrint::~InstructionPrint() {

}

void InstructionPrint::execute() {
	OperandInterface * operand = AbstractVM::getInstance()->getPile()->get();
	std::stringstream ss;
	int ch;
	ss << operand->toString();
	ss >> ch;
	if (ch < 256 && ch >= 0) {
		std::stringstream c;
		c << (char) ch;
		(*AbstractVM::getInstance()->getOut()) << c.str();
		return;
	}
	throw StopException();
}
