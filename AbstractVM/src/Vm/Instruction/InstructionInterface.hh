/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONINTERFACE_HH__
#define	__INSTRUCTIONINTERFACE_HH__

#include <Core>

class InstructionInterface {
protected:

public:
	InstructionInterface() {}
	virtual ~InstructionInterface() = 0;

	virtual void initialize() = 0;
	virtual void finalize() = 0;

	virtual void addParam(std::string param) = 0;

	virtual void operator()(Core * core) = 0;

};

#endif
