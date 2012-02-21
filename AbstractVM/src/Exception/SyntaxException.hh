/**
 *
 *
 *
 */

#ifndef __SYNTAXEXCEPTION_HH__
#define	__SYNTAXEXCEPTION_HH__

#include "AbstractVMException.hh"

class SyntaxException : public AbstractVMException {
public:
	SyntaxException(std::string message = "") throw();
	virtual ~SyntaxException() throw();

};

#endif
