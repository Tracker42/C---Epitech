/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONASSERT_HH__
#define	__INSTRUCTIONASSERT_HH__

#include "AbstractInstruction.hh"

class InstructionAssert : public AbstractInstruction {
protected:

public:
	InstructionAssert();
	virtual ~InstructionAssert();

	virtual void operator()(Core * core) = 0;

};

#endif
