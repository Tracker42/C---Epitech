/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONDIV_HH__
#define	__INSTRUCTIONDIV_HH__

#include "AbstractInstruction.hh"

class InstructionDiv : public AbstractInstruction {
protected:

public:
	InstructionDiv();
	virtual ~InstructionDiv();

	virtual void operator()(Core * core) = 0;

};

#endif
