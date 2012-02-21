/**
 *
 *
 *
 */

#ifndef __ABSTRACTOPERANDHANDLER_HH__
#define	__ABSTRACTOPERANDHANDLER_HH__

#include <string>
#include "OperandHandlerInterface.hh"

class AbstractOperandHandler : public OperandHandlerInterface {
protected:
	int precision;
	eOperandType type;
	std::string name;

public:
	AbstractOperandHandler(int precision, eOperandType type, std::string name);
	virtual ~AbstractOperandHandler();

	virtual int getPrecision() const;
	virtual eOperandType getType() const;
	virtual const std::string & getName() const;

};

#endif
