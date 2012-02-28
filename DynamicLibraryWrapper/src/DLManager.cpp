
#include "DLManager.hh"
#include "DLException.hh"

DLManager * DLManager::instance = NULL;

DLManager::DLManager() {

}

DLManager::DLManager(const DLManager & src) {
	(void) src;
	throw DLException("call copy constructor in DLManager");
}

DLManager::~DLManager() {
	closeAll();
}

DLManager & DLManager::operator =(const DLManager & src) {
	(void) src;
	throw DLException("call operator '=' in DLManager");
}

DLManager * DLManager::getInstance() {
	if (!instance) {
		instance = new DLManager();
	}
	return instance;
}

void DLManager::destroy() {
	if (instance) {
		delete instance;
		instance = NULL;
	}
}

DLHandler * DLManager::open(const std::string & library, int flag) {
	std::map<std::string, DLHandler *>::iterator iter = handlers.find(library);
	if (iter != handlers.end()) {
		DLHandler * handler = NULL;
		try {
			handler = new DLHandler(library, flag);
		}
		catch (DLException & e) {
			if (handler) {
				delete handler;
			}
			throw e;
		}
		handlers[library] = handler;
		return handler;
	}
	return (*iter).second;
}

DLHandler * DLManager::get(const std::string & library) {
	return open(library);
}

DLSymbol * DLManager::symbol(const std::string & library, const std::string & symbol) {
	std::map<std::string, DLHandler *>::iterator iter = handlers.find(library);
	if (iter != handlers.end()) {
		return (*iter).second->symbol(symbol);
	}
	return open(library)->symbol(symbol);
}

const std::string & DLManager::error() {
	return err;
}

void DLManager::clearError() {
	err = "";
}

void DLManager::close(const std::string & library) {
	std::map<std::string, DLHandler *>::iterator iter = handlers.find(library);
	if (iter != handlers.end()) {
		delete (*iter).second;
		handlers.erase(iter);
	}
}

void DLManager::close(const DLHandler* handler) {
	if (handler) {
		close(handler->getName());
	}
}

void DLManager::closeAll() {
	std::map<std::string, DLHandler *>::iterator iter = handlers.begin();
	while (iter != handlers.end()) {
		delete (*iter).second;
	}
}

DLHandler & DLManager::operator [](const std::string & library) {
	return *(get(library));
}
