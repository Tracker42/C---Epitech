/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONADDHANDLER_HH__
#define	__INSTRUCTIONADDHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionAddHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionAddHandler();
	virtual ~InstructionAddHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
