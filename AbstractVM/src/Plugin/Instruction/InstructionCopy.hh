/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONCOPY_HH__
#define	__INSTRUCTIONCOPY_HH__

#include <Instruction>
#include "../../Vm/Instruction/AbstractInstruction.hh"

class InstructionCopy : public AbstractInstruction {
public:
	InstructionCopy();
	virtual ~InstructionCopy();

	virtual void execute();

};

#endif
