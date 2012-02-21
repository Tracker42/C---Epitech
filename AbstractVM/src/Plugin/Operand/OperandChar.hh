/**
 *
 *
 *
 */

#ifndef __OPERANDCHAR_HH__
#define	__OPERANDCHAR_HH__

#include <Operand>
#include "../../Vm/Operand/AbstractOperand.hh"

class OperandChar : public AbstractOperand<char> {
public:
	OperandChar(std::string value);
	virtual ~OperandChar();

	virtual std::string toString() const;

	virtual OperandInterface * operator+(const OperandInterface & rhs) const;
	virtual OperandInterface * operator-(const OperandInterface & rhs) const;
	virtual OperandInterface * operator*(const OperandInterface & rhs) const;
	virtual OperandInterface * operator/(const OperandInterface & rhs) const;
	virtual OperandInterface * operator%(const OperandInterface & rhs) const;

};

#define OPERAND_CHAR_PRECISION 8
#define OPERAND_CHAR_TYPE 0
#define OPERAND_CHAR_NAME "char"

#endif
