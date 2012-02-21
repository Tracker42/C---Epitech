
#include "InstructionCopyHandler.hh"

#include "InstructionCopy.hh"

InstructionCopyHandler::InstructionCopyHandler()
: AbstractInstructionHandler("copy") {

}

InstructionCopyHandler::~InstructionCopyHandler() {

}

InstructionInterface * InstructionCopyHandler::createInstruction() {
	return new InstructionCopy();
}
