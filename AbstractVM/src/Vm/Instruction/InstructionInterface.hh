/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONINTERFACE_HH__
#define	__INSTRUCTIONINTERFACE_HH__

#include <string>

class InstructionInterface {
protected:

public:
	virtual void initialize() = 0;
	virtual void finalize() = 0;

	virtual void addParam(std::string param) = 0;

	virtual void execute() = 0;
	virtual void operator()() = 0;

};

#endif
