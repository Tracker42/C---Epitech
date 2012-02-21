
#include "AbstractOperand.hh"

#include <sstream>
#include <algorithm>
#include <cmath>
#include <limits>
#include <AbstractVM>
#include <Exception>

template<typename T>
AbstractOperand<T>::AbstractOperand(std::string string, int precision, eOperandType type)
: precision(precision), type(type) {
	value = AbstractOperand<T>::stringToValue(string);
	this->string = AbstractOperand<T>::valueToString(value);
}

template<typename T>
AbstractOperand<T>::~AbstractOperand() {

}

template<typename T>
std::string AbstractOperand<T>::toString() const {
	return string;
}

template<typename T>
int AbstractOperand<T>::getPrecision() const {
	return precision;
}

template<typename T>
eOperandType AbstractOperand<T>::getType() const {
	return type;
}

template<typename T>
OperandInterface * AbstractOperand<T>::operator +(const OperandInterface& rhs) const {
	if (type < rhs.getType()) {
		return rhs + *this;
	}
	T rhsv = AbstractOperand<T>::stringToValue(rhs.toString());
	T res = value + rhsv;
	if ((res - rhsv) != value) {
		throw OverflowException(string + " + " + rhs.toString());
	}
	std::string result = AbstractOperand<T>::valueToString(res);
	return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
}

template<typename T>
OperandInterface * AbstractOperand<T>::operator -(const OperandInterface& rhs) const {
	if (type < rhs.getType()) {
		return rhs - *this;
	}
	T rhsv = AbstractOperand<T>::stringToValue(rhs.toString());
	T res = value - rhsv;
	if ((res + rhsv) != value) {
		throw OverflowException(string + " - " + rhs.toString());
	}
	std::string result = AbstractOperand<T>::valueToString(res);
	return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
}

template<typename T>
OperandInterface * AbstractOperand<T>::operator *(const OperandInterface& rhs) const {
	if (type < rhs.getType()) {
		return rhs * *this;
	}
	T rhsv = AbstractOperand<T>::stringToValue(rhs.toString());
	T res = value * rhsv;
	if ((res / rhsv) != value) {
		throw OverflowException(string + " * " + rhs.toString());
	}
	std::string result = AbstractOperand<T>::valueToString(res);
	return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
}

template<typename T>
OperandInterface * AbstractOperand<T>::operator /(const OperandInterface& rhs) const {
	if (AbstractOperand<T>::stringToValue(rhs.toString())) {
		eOperandType type = std::max(getType(), rhs.getType());
		std::string result = AbstractOperand<T>::valueToString(value / AbstractOperand<T>::stringToValue(rhs.toString()));
		return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
	}
	throw StopException("Divide by zero!");
}

template<typename T>
OperandInterface * AbstractOperand<T>::operator %(const OperandInterface& rhs) const {
	if (AbstractOperand<T>::stringToValue(rhs.toString())) {
		eOperandType type = std::max(getType(), rhs.getType());
		std::string result = AbstractOperand<T>::valueToString(fmod(value, AbstractOperand<T>::stringToValue(rhs.toString())));
		return AbstractVM::getInstance()->getOperandFactory()->createOperand(type, result);
	}
	throw StopException("Modulo by zero!");
}

template<typename T>
T AbstractOperand<T>::stringToValue(std::string string) {
	T value;
	std::stringstream ss;
	ss << string;
	ss >> value;
	return value;
}

template<typename T>
std::string AbstractOperand<T>::valueToString(T value) {
	std::string string;
	std::stringstream ss;
	ss << value;
	ss >> string;
	return string;
}
