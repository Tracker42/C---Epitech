/**
 *
 *
 *
 */

#ifndef __PILEEXCEPTION_HH__
#define	__PILEEXCEPTION_HH__

#include "AbstractVMException.hh"

class PileException : public AbstractVMException {
public:
	PileException(std::string message = "") throw();
	virtual ~PileException() throw();

};

#endif
