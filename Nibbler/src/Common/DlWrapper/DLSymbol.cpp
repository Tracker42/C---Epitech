
#include "DLSymbol.hh"
#include "DLException.hh"

DLSymbol::DLSymbol(DLHandler * handler)
: handler(handler), ptr(NULL) {

}

DLSymbol::DLSymbol(const DLSymbol & src) {
	(void) src;
}

DLSymbol::~DLSymbol() {

}

void DLSymbol::symbol(const std::string & sym) {
	if (handler) {
		ptr = dlsym(**handler, sym.data());
		if (ptr) {
			name = sym;
			return;
		}
		throw DLException(std::string("Unable to find symbol '") + sym + "'");
	}
	throw DLException(std::string("No handler for sym '") + sym + "'");
}

DLHandler * DLSymbol::getHandler() const {
	return handler;
}

const std::string & DLSymbol::getName() const {
	return name;
}

void * DLSymbol::getSymbol() const {
	return ptr;
}

DLSymbol & DLSymbol::operator =(const DLSymbol & src) {
	(void) src;
	return *this;
}

void * DLSymbol::operator *() {
	if (ptr) {
		return ptr;
	}
	throw DLException("No symbol");
}
