/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONADD_HH__
#define	__INSTRUCTIONADD_HH__

#include "AbstractInstruction.hh"

class InstructionAdd : public AbstractInstruction {
protected:

public:
	InstructionAdd();
	virtual ~InstructionAdd();

	virtual void execute();

};

#endif
