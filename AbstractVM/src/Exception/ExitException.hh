/**
 *
 *
 *
 */

#ifndef __EXITEXCEPTION_HH__
#define	__EXITEXCEPTION_HH__

#include "StopException.hh"

class ExitException : public StopException {
public:
	ExitException() throw();
	virtual ~ExitException() throw();

};

#endif
