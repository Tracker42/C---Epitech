/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONMODHANDLER_HH__
#define	__INSTRUCTIONMODHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionModHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionModHandler();
	virtual ~InstructionModHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
