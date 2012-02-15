/**
 *
 *
 *
 */

#ifndef __OPERANDFACTORY_HH__
#define	__OPERANDFACTORY_HH__

#include "OperandHandlerInterface.hh"
#include "OperandInterface.hh"

class OperandFactory {
protected:

public:
	OperandFactory();
	virtual ~OperandFactory();

	std::list<std::string> getListStringOperands();

};

#endif
