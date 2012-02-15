/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONASSERTHANDLER_HH__
#define	__INSTRUCTIONASSERTHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionAssertHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionAssertHandler();
	virtual ~InstructionAssertHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
