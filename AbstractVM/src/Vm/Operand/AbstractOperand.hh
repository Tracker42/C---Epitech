/**
 *
 *
 *
 */

#ifndef __ABSTRACTOPERAND_HH__
#define	__ABSTRACTOPERAND_HH__

#include <string>

#include <AbstractVM>
#include "OperandInterface.hh"

template<typename T>
class AbstractOperand : public OperandInterface {
protected:
	T value;
	std::string string;
	int precision;
	eOperandType type;

public:
	AbstractOperand(std::string string, int precision, eOperandType type);
	virtual ~AbstractOperand();

	virtual std::string toString() const;
	virtual int getPrecision() const;
	virtual eOperandType getType() const;

	virtual OperandInterface * operator+(const OperandInterface & rhs) const;
	virtual OperandInterface * operator-(const OperandInterface & rhs) const;
	virtual OperandInterface * operator*(const OperandInterface & rhs) const;
	virtual OperandInterface * operator/(const OperandInterface & rhs) const;
	virtual OperandInterface * operator%(const OperandInterface & rhs) const;

	static T stringToValue(std::string string);
	static std::string valueToString(T value);

};

#include "AbstractOperand.cpp"

#endif
