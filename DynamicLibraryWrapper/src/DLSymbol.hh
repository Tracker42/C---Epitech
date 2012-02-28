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

#define DLCAST(cast, sym) ((cast) (*sym))

class DLSymbol {
protected:
	DLHandler * handler;
	std::string name;
	void * symbol;

public:
	DLSymbol(void * handler, const std::string & sym);
	DLSymbol(DLHandler * handler, const std::string & sym);
	DLSymbol(const DLSymbol & src);
	virtual ~DLSymbol();

	DLHandler * getHandler() const;
	const std::string & getName() const;
	void * getSymbol() const;

	DLSymbol & operator =(const DLSymbol & src);
	void * operator *();

};

#endif
