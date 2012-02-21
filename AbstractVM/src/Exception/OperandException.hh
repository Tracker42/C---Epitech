/**
 *
 *
 *
 */

#ifndef __OPERANDEXCEPTION_HH__
#define	__OPERANDEXCEPTION_HH__

#include "AbstractVMException.hh"

class OperandException : public AbstractVMException {
public:
	OperandException(std::string message = "") throw();
	virtual ~OperandException() throw();

};

#endif
