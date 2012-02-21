/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONCOPYHANDLER_HH__
#define	__INSTRUCTIONCOPYHANDLER_HH__

#include <Instruction>
#include "../../Vm/Instruction/AbstractInstructionHandler.hh"

class InstructionCopyHandler : public AbstractInstructionHandler {
public:
	InstructionCopyHandler();
	virtual ~InstructionCopyHandler();

	virtual InstructionInterface * createInstruction();
	
};

#endif
