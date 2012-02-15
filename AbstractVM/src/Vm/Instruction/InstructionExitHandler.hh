/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONEXITHANDLER_HH__
#define	__INSTRUCTIONEXITHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionExitHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionExitHandler();
	virtual ~InstructionExitHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
