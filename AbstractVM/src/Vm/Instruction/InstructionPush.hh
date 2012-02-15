/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPUSH_HH__
#define	__INSTRUCTIONPUSH_HH__

#include "AbstractInstruction.hh"

class InstructionPush : public AbstractInstruction {
protected:

public:
	InstructionPush();
	virtual ~InstructionPush();

	virtual void operator()(Core * core) = 0;

};

#endif
