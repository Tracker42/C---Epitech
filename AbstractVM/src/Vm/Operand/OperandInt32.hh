/**
 *
 *
 *
 */

#ifndef __OPERANDINT32_HH__
#define	__OPERANDINT32_HH__

#include "AbstractOperand.hh"

class OperandInt32 : public AbstractOperand<int> {
public:
	OperandInt32(std::string value);
	virtual ~OperandInt32();

};

#endif
