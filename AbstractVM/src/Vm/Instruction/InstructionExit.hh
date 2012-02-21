/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONEXIT_HH__
#define	__INSTRUCTIONEXIT_HH__

#include "AbstractInstruction.hh"

class InstructionExit : public AbstractInstruction {
protected:

public:
	InstructionExit();
	virtual ~InstructionExit();

	virtual void execute();

};

#endif
