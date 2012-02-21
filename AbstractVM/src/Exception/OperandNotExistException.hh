/**
 *
 *
 *
 */

#ifndef __OPERANDNOTEXISTEXCEPTION_HH__
#define	__OPERANDNOTEXISTEXCEPTION_HH__

#include "AbstractVMException.hh"

class OperandNotExistException : public AbstractVMException {
public:
	OperandNotExistException(std::string message = "") throw();
	virtual ~OperandNotExistException() throw();

};

#endif
