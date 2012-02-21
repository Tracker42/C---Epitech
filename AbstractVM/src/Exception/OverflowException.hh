/**
 *
 *
 *
 */

#ifndef __OVERFLOWEXCEPTION_HH__
#define	__OVERFLOWEXCEPTION_HH__

#include "AbstractVMException.hh"

class OverflowException : public AbstractVMException {
public:
	OverflowException(std::string message = "") throw();
	virtual ~OverflowException() throw();

};

#endif
