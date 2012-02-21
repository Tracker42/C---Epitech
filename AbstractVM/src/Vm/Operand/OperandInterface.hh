/**
 *
 *
 *
 */

#ifndef __OPERANDINTERFACE_HH__
#define	__OPERANDINTERFACE_HH__

#include <string>

typedef int eOperandType;

class OperandInterface {
protected:

public:
	virtual std::string toString() const = 0;
	virtual int getPrecision() const = 0;
	virtual eOperandType getType() const = 0;

	virtual OperandInterface * operator+(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator-(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator*(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator/(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator%(const OperandInterface & rhs) const = 0;

};

typedef OperandInterface IOperand;

#endif

