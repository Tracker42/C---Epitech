/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONMUL_HH__
#define	__INSTRUCTIONMUL_HH__

#include "AbstractInstruction.hh"

class InstructionMul : public AbstractInstruction {
protected:

public:
	InstructionMul();
	virtual ~InstructionMul();

	virtual void execute();

};

#endif
