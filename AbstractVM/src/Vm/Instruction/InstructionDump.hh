/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONDUMP_HH__
#define	__INSTRUCTIONDUMP_HH__

#include "AbstractInstruction.hh"

class InstructionDump : public AbstractInstruction {
protected:

public:
	InstructionDump();
	virtual ~InstructionDump();

	virtual void operator()(Core * core) = 0;

};

#endif
