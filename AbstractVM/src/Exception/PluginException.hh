/**
 *
 *
 *
 */

#ifndef __PLUGINEXCEPTION_HH__
#define	__PLUGINEXCEPTION_HH__

#include "AbstractVMException.hh"

class PluginException : public AbstractVMException {
public:
	PluginException(std::string message = "") throw();
	virtual ~PluginException() throw();

};

#endif
