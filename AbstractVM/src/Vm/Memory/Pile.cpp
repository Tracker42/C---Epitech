
#include "Pile.hh"

#include <Exception>

Pile::Pile() {

}

Pile::~Pile() {

}

void Pile::push(OperandInterface * item) {
	pile.push(item);
}

OperandInterface * Pile::get() {
	if (pile.empty()) {
		throw PileException("empty");
	}
	return pile.top();
}

void Pile::pop() {
	if (pile.empty()) {
		throw PileException("empty");
	}
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
