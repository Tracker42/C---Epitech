/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONSUB_HH__
#define	__INSTRUCTIONSUB_HH__

#include "AbstractInstruction.hh"

class InstructionSub : public AbstractInstruction {
protected:

public:
	InstructionSub();
	virtual ~InstructionSub();

	virtual void execute();

};

#endif
