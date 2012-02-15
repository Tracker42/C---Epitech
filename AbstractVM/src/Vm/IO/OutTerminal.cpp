
#include "OutTerminal.hh"

OutTerminal::OutTerminal() {

}

OutTerminal::~OutTerminal() {

}

OutInterface & OutTerminal::operator <<(std::string string) {
	std::cout << string << std::endl;
	return *this;
}

OutInterface & OutTerminal::operator <<(OperandInterface * operand) {
	std::cout << operand->toString() << std::endl;
	return *this;
}
