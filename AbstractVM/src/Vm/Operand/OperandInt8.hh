/**
 *
 *
 *
 */

#ifndef __OPERANDINT8_HH__
#define	__OPERANDINT8_HH__

#include "AbstractOperand.hh"

class OperandInt8 : public AbstractOperand<char> {
protected:

public:
	OperandInt8(const std::string & value);
	virtual ~OperandInt8();

};

#endif
