/**
 *
 *
 *
 */

#ifndef __DLHANDLER_HH__
#define	__DLHANDLER_HH__

class DLHandler;

#include <dlfcn.h>
#include <string>
#include <map>

#include "DLSymbol.hh"

class DLHandler {
protected:
	std::map<std::string, DLSymbol *> symbols;
	std::string library;
	void * handler;
	bool ok;
	std::string err;

public:
	DLHandler();
	DLHandler(const DLHandler & src);
	virtual ~DLHandler();

	const std::string & getName() const;
	bool isOpen() const;
	const std::string & getError() const;

	void open(const std::string & library, int flag = RTLD_LAZY);

	DLSymbol * symbol(const std::string & sym);
	DLSymbol * get(const std::string & sym);
	bool has(const std::string & sym);

	void close();

	DLHandler & operator =(const DLHandler & src);
	DLSymbol & operator [](const std::string & sym);
	void * operator *();

};

#endif
