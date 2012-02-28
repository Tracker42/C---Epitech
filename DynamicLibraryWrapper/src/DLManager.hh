/**
 *
 *
 *
 */

#ifndef __DLMANAGER_HH__
#define	__DLMANAGER_HH__

#include <dlfcn.h>
#include <string>
#include <map>

#include "DLHandler.hh"

class DLManager {
protected:
	static DLManager * instance;
	std::map<std::string, DLHandler *> handlers;
	std::string err;

	DLManager();
	DLManager(const DLManager & src);
	virtual ~DLManager();
	DLManager & operator =(const DLManager & src);

public:
	DLManager * getInstance();
	void destroy();

	DLHandler * open(const std::string & library, int flag = RTLD_LAZY);
	DLHandler * get(const std::string & library);

	DLSymbol * symbol(const std::string & library, const std::string & symbol);

	const std::string & error();
	void clearError();

	void close(const std::string & library);
	void close(const DLHandler * handler);
	void closeAll();

	DLHandler & operator [](const std::string & library);

};

#endif
