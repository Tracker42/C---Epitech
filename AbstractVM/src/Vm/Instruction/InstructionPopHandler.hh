/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPOPHANDLER_HH__
#define	__INSTRUCTIONPOPHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionPopHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionPopHandler();
	virtual ~InstructionPopHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
