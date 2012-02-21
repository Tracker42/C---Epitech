/**
 *
 *
 *
 */

#ifndef __OPERANDDOUBLE_HH__
#define	__OPERANDDOUBLE_HH__

#include "AbstractOperand.hh"

class OperandDouble : public AbstractOperand<double> {
public:
	OperandDouble(std::string value);
	virtual ~OperandDouble();

	virtual OperandInterface * operator%(const OperandInterface & rhs) const;
	
};

#endif
