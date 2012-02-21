/**
 *
 *
 *
 */

#ifndef __OPERANDHANDLERINTERFACE_HH__
#define	__OPERANDHANDLERINTERFACE_HH__

#include <string>

#include "OperandInterface.hh"

class OperandHandlerInterface {
protected:

public:
	virtual int getPrecision() const = 0;
	virtual eOperandType getType() const = 0;
	virtual const std::string & getName() const = 0;

	virtual OperandInterface * create(const std::string & value) = 0;

};

#endif
