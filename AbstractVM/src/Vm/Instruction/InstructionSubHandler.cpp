#include "InstructionSubHandler.hh"
#include "InstructionSub.hh"

InstructionSubHandler::InstructionSubHandler()
: AbstractInstructionHandler("sub") {

}

InstructionSubHandler::~InstructionSubHandler() {

}

InstructionInterface * InstructionSubHandler::createInstruction() {
	return new InstructionSub();
}
