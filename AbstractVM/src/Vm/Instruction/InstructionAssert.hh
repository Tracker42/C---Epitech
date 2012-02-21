/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONASSERT_HH__
#define	__INSTRUCTIONASSERT_HH__

#include "AbstractInstructionWithParams.hh"

class InstructionAssert : public AbstractInstructionWithParams {
protected:

public:
	InstructionAssert();
	virtual ~InstructionAssert();

	virtual void execute();

};

#endif
