/**
 *
 *
 *
 */

#ifndef __OPERANDINT8HANDLER_HH__
#define	__OPERANDINT8HANDLER_HH__

#include "AbstractOperandHandler.hh"

class OperandInt8Handler : public AbstractOperandHandler {
public:
	OperandInt8Handler();
	virtual ~OperandInt8Handler();

	virtual OperandInterface * create(const std::string & value);

};

#endif
