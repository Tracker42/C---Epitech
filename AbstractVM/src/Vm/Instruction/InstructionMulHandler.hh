/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONMULHANDLER_HH__
#define	__INSTRUCTIONMULHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionMulHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionMulHandler();
	virtual ~InstructionMulHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
