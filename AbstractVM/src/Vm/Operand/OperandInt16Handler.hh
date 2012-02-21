/**
 *
 *
 *
 */

#ifndef __OPERANDINT16HANDLER_HH__
#define	__OPERANDINT16HANDLER_HH__

#include "AbstractOperandHandler.hh"

class OperandInt16Handler : public AbstractOperandHandler {
public:
	OperandInt16Handler();
	virtual ~OperandInt16Handler();

	virtual OperandInterface * create(const std::string & value);
	
};

#endif
