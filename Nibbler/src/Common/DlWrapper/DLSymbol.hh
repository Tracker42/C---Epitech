/**
 *
 *
 *
 */

#ifndef __DLSYMBOL_HH__
#define	__DLSYMBOL_HH__

class DLSymbol;

#include <dlfcn.h>
#include <string>

#include "DLHandler.hh"

class DLSymbol {
protected:
	DLHandler * handler;
	std::string name;
	void * ptr;

public:
	DLSymbol(DLHandler * handler);
	DLSymbol(const DLSymbol & src);
	virtual ~DLSymbol();

	void symbol(const std::string & sym);

	DLHandler * getHandler() const;
	const std::string & getName() const;
	void * getSymbol() const;

	DLSymbol & operator =(const DLSymbol & src);
	void * operator *();

};

#endif
