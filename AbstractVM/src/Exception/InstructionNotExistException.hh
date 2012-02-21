/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONNOTEXISTEXCEPTION_HH__
#define	__INSTRUCTIONNOTEXISTEXCEPTION_HH__

#include "AbstractVMException.hh"

class InstructionNotExistException : public AbstractVMException {
public:
	InstructionNotExistException(std::string message = "") throw();
	virtual ~InstructionNotExistException() throw();

};

#endif
