/**
 *
 *
 *
 */

#ifndef __STOPEXCEPTION_HH__
#define	__STOPEXCEPTION_HH__

#include "AbstractVMException.hh"

class StopException : public AbstractVMException {
public:
	StopException(std::string message = "") throw();
	virtual ~StopException() throw();

};

#endif
