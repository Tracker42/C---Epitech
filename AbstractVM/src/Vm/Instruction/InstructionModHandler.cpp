#include "InstructionModHandler.hh"
#include "InstructionMod.hh"

InstructionModHandler::InstructionModHandler()
: AbstractInstructionHandler("mod") {

}

InstructionModHandler::~InstructionModHandler() {

}

InstructionInterface * InstructionModHandler::createInstruction() {
	return new InstructionMod();
}
