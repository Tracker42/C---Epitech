/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONHANDLERINTERFACE_HH__
#define	__INSTRUCTIONHANDLERINTERFACE_HH__

#include <string>

#include "InstructionInterface.hh"

class InstructionHandlerInterface {
protected:

public:
	InstructionHandlerInterface() {}
	virtual ~InstructionHandlerInterface() = 0;

	virtual const std::string & getTag() const = 0;
	virtual InstructionInterface * create() = 0;

};

#endif
