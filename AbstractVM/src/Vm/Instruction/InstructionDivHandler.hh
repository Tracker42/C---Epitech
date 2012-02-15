/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONDIVHANDLER_HH__
#define	__INSTRUCTIONDIVHANDLER_HH__

#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"

class InstructionDivHandler : public AbstractInstructionHandler {
protected:

public:
	InstructionDivHandler();
	virtual ~InstructionDivHandler();

	virtual InstructionInterface * createInstruction();

};

#endif
