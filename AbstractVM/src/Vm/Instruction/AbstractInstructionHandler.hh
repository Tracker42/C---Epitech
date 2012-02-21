/**
 *
 *
 *
 */

#ifndef __ABSTRACTINSTRUCTIONHANDLER_HH__
#define	__ABSTRACTINSTRUCTIONHANDLER_HH__

#include "InstructionHandlerInterface.hh"

class AbstractInstructionHandler : public InstructionHandlerInterface {
protected:
	std::string tag;

public:
	AbstractInstructionHandler(std::string tag);
	virtual ~AbstractInstructionHandler() = 0;

	virtual const std::string & getTag() const;
	virtual InstructionInterface * create();
	virtual InstructionInterface * createInstruction() = 0;

};

#endif
