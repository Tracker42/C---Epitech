/**
 *
 *
 *
 */

#ifndef __OPERANDFACTORY_HH__
#define	__OPERANDFACTORY_HH__

#include <string>
#include <map>
#include <list>

#include "OperandInterface.hh"
#include "OperandHandlerInterface.hh"

class OperandFactory {
protected:
	std::map<eOperandType, OperandHandlerInterface *> map;

public:
	OperandFactory();
	virtual ~OperandFactory();

	void registerOperand(OperandHandlerInterface * handler);
	OperandInterface * createOperand(eOperandType type, const std::string & value);

	std::list<std::string> getListStringOperands();
	eOperandType retrieveFromString(std::string & type);

};

#endif
