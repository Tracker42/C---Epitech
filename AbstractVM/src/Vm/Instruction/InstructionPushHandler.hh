/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPUSHHANDLER_HH__
#define	__INSTRUCTIONPUSHHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionPushHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionPushHandler();
	virtual ~InstructionPushHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
