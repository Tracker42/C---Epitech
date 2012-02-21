/**
 *
 *
 *
 */

#ifndef __OPERANDFLOAT_HH__
#define	__OPERANDFLOAT_HH__

#include "AbstractOperand.hh"

class OperandFloat : public AbstractOperand<float> {
public:
	OperandFloat(std::string value);
	virtual ~OperandFloat();

	virtual OperandInterface * operator%(const OperandInterface & rhs) const;

};

#endif
