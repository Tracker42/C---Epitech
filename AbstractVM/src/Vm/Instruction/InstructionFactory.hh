/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONFACTORY_HH__
#define	__INSTRUCTIONFACTORY_HH__

#include <string>
#include <list>
#include <map>

#include "InstructionHandlerInterface.hh"
#include "InstructionInterface.hh"

class InstructionFactory {
protected:
	std::map<std::string, InstructionHandlerInterface *> map;

public:
	InstructionFactory();
	virtual ~InstructionFactory();

	void registerInstruction(InstructionHandlerInterface * handler);
	InstructionInterface * createInstruction(std::string tag);

	std::list<std::string> getListStringInstructions();

};

#endif
