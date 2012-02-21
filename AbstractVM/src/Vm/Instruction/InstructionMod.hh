/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONMOD_HH__
#define	__INSTRUCTIONMOD_HH__

#include "AbstractInstruction.hh"

class InstructionMod : public AbstractInstruction {
protected:

public:
	InstructionMod();
	virtual ~InstructionMod();

	virtual void execute();

};

#endif
