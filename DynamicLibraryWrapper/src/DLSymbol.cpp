
#include "DLSymbol.hh"
#include "DLException.hh"

DLSymbol::DLSymbol(void * handler, const std::string & sym)
: handler(NULL), symbol(NULL) {
	if (handler) {
		symbol = dlsym(handler, sym.data());
		if (symbol) {
			name = sym;
			return;
		}
		throw DLException(std::string("Unable to find symbol '") + sym + "'");
	}
}

DLSymbol::DLSymbol(DLHandler * handler, const std::string & sym)
: handler(NULL), symbol(NULL) {
	if (handler) {
		symbol = dlsym(**handler, sym.data());
		if (symbol) {
			this->handler = handler;
			name = sym;
			return;
		}
		throw DLException(std::string("Unable to find symbol '") + sym + "' in library '" + handler->getName() + "'");
	}
	throw DLException(std::string("No handler for sym '") + sym + "'");
}

DLSymbol::DLSymbol(const DLSymbol & src) {
	(void) src;
}

DLSymbol::~DLSymbol() {

}

DLHandler * DLSymbol::getHandler() const {
	return handler;
}

const std::string & DLSymbol::getName() const {
	return name;
}

void * DLSymbol::getSymbol() const {
	return symbol;
}

DLSymbol & DLSymbol::operator =(const DLSymbol & src) {
	(void) src;
	return *this;
}

void * DLSymbol::operator *() {
	if (symbol) {
		return symbol;
	}
	throw DLException("No symbol");
}
