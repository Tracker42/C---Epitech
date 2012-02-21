/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPUSH_HH__
#define	__INSTRUCTIONPUSH_HH__

#include "AbstractInstructionWithParams.hh"

class InstructionPush : public AbstractInstructionWithParams {
protected:

public:
	InstructionPush();
	virtual ~InstructionPush();

	virtual void execute();

};

#endif
