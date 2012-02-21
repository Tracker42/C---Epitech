/**
 *
 *
 *
 */

#ifndef __OPERANDINT32HANDLER_HH__
#define	__OPERANDINT32HANDLER_HH__

#include "AbstractOperandHandler.hh"

class OperandInt32Handler : public AbstractOperandHandler {
protected:

public:
	OperandInt32Handler();
	virtual ~OperandInt32Handler();

	virtual OperandInterface * create(const std::string & value);

};

#endif
