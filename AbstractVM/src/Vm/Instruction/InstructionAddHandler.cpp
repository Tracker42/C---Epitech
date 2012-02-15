#include "InstructionAddHandler.hh"
#include "InstructionAdd.hh"

InstructionAddHandler::InstructionAddHandler()
: AbstractInstructionHandler("add") {

}

InstructionAddHandler::~InstructionAddHandler() {

}

InstructionInterface * InstructionAddHandler::createInstruction() {
	return new InstructionAdd();
}
