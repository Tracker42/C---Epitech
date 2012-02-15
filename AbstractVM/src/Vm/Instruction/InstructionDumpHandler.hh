/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONDUMPHANDLER_HH__
#define	__INSTRUCTIONDUMPHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionDumpHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionDumpHandler();
	virtual ~InstructionDumpHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
