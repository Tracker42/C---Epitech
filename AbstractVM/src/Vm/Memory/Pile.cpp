
#include "Pile.hh"

Pile::Pile() {

}

Pile::~Pile() {

}

void Pile::push(OperandInterface * item) {
	pile.push(item);
}

OperandInterface * Pile::get() {
	return pile.top();
}

void Pile::pop() {
	pile.pop();
}

void Pile::dump() {
	if (!pile.empty()) {
		OperandInterface * elem = pile.top();
		pile.pop();
		(*AbstractVM::getInstance()->getOut()) << elem;
		dump();
		push(elem);
	}
}
