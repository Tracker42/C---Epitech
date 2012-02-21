/**
 *
 *
 *
 */

#ifndef __OPERANDINT16_HH__
#define	__OPERANDINT16_HH__

#include "AbstractOperand.hh"

class OperandInt16 : public AbstractOperand<short> {
public:
	OperandInt16(std::string value);
	virtual ~OperandInt16();

};

#endif
