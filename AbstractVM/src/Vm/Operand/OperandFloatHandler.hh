/**
 *
 *
 *
 */

#ifndef __OPERANDFLOATHANDLER_HH__
#define	__OPERANDFLOATHANDLER_HH__

#include "AbstractOperandHandler.hh"

class OperandFloatHandler : public AbstractOperandHandler {
protected:

public:
	OperandFloatHandler();
	virtual ~OperandFloatHandler();

	virtual OperandInterface * create(const std::string & value);
	
};

#endif
