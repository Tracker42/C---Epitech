
#include "DLHandler.hh"
#include "DLException.hh"

DLHandler::DLHandler()
: handler(NULL), ok(false) {

}

DLHandler::DLHandler(const std::string & library, int flag) {
	open(library, flag);
}

DLHandler::DLHandler(const DLHandler & src) {
	(void) src;
}

DLHandler::~DLHandler() {
	close();
}

const std::string & DLHandler::getName() const {
	return library;
}

bool DLHandler::isOpen() const {
	return ok;
}

const std::string & DLHandler::getError() const {
	return err;
}

void DLHandler::open(const std::string & library, int flag) {
	if (ok) {
		throw DLException(std::string("Handler already open with '") + this->library + "'");
	}
	handler = dlopen(library.data(), flag);
	if (handler) {
		this->library = library;
		ok = true;
	}
	else {
		err = dlerror();
		ok = false;
		throw DLException(std::string("Unable to open library '") + library + "'");
	}
}

DLSymbol * DLHandler::symbol(const std::string & sym) {
	if (ok) {
		std::map<std::string, DLSymbol *>::iterator iter = symbols.find(sym);
		if (iter != symbols.end()) {
			return (*iter).second;
		}
		else {
			DLSymbol * s = NULL;
			try {
				s = new DLSymbol(this, sym);
			}
			catch (DLException & e) {
				if (s) {
					delete s;
				}
				throw e;
			}
			symbols[sym] = s;
			return s;
		}
	}
	throw DLException("No library opened");
}

DLSymbol * DLHandler::get(const std::string & sym) {
	return symbol(sym);
}

bool DLHandler::has(const std::string& sym) {
	try {
		symbol(sym);
		return true;
	}
	catch (DLException & e) {
		return false;
	}
}

void DLHandler::close() {
	if (ok) {
		dlclose(handler);
		library = "";
		handler = NULL;
		ok = false;
		err = "";
	}
}

DLHandler & DLHandler::operator =(const DLHandler & src) {
	(void) src;
	return *this;
}

DLSymbol & DLHandler::operator [](const std::string & sym) {
	return *(symbol(sym));
}

void * DLHandler::operator *() {
	return handler;
}
