/**
 *
 *
 *
 */

#ifndef __PARSEREXCEPTION_HH__
#define	__PARSEREXCEPTION_HH__

#include "AbstractVMException.hh"

class ParserException : public AbstractVMException {
public:
	ParserException(std::string message = "") throw();
	virtual ~ParserException() throw();

};

#endif
