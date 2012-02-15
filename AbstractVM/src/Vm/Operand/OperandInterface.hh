/**
 *
 *
 *
 */

#ifndef __OPERANDINTERFACE_HH__
#define	__OPERANDINTERFACE_HH__

#include <string>

class OperandInterface {
protected:

public:
	OperandInterface() {}
	virtual ~OperandInterface() = 0;

	virtual std::string toString() const = 0;
	virtual int getPrecision() const = 0;
	virtual int getType() const = 0;

	virtual OperandInterface * operator+(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator-(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator*(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator/(const OperandInterface & rhs) const = 0;
	virtual OperandInterface * operator%(const OperandInterface & rhs) const = 0;

};

#endif

