/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPRINTHANDLER_HH__
#define	__INSTRUCTIONPRINTHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionPrintHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionPrintHandler();
	virtual ~InstructionPrintHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
