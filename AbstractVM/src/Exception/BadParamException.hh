/**
 *
 *
 *
 */

#ifndef __BADPARAMEXCEPTION_HH__
#define	__BADPARAMEXCEPTION_HH__

#include "AbstractVMException.hh"

class BadParamException : public AbstractVMException {
public:
	BadParamException(std::string message = "") throw();
	virtual ~BadParamException() throw();

};

#endif
