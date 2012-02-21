/**
 *
 *
 *
 */

#ifndef __OPERANDCHARHANDLER_HH__
#define	__OPERANDCHARHANDLER_HH__

#include <Operand>

#include "../../Vm/Operand/AbstractOperandHandler.hh"

class OperandCharHandler : public AbstractOperandHandler {
public:
	OperandCharHandler();
	virtual ~OperandCharHandler();

	virtual OperandInterface * create(const std::string & value);

};

#endif
