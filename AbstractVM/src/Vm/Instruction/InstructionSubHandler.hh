/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONSUBHANDLER_HH__
#define	__INSTRUCTIONSUBHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionSubHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionSubHandler();
	virtual ~InstructionSubHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
