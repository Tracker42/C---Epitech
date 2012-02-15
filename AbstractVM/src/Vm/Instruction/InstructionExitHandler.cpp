#include "InstructionExitHandler.hh"
#include "InstructionExit.hh"

InstructionExitHandler::InstructionExitHandler()
: AbstractInstructionHandler("exit") {

}

InstructionExitHandler::~InstructionExitHandler() {

}

InstructionInterface * InstructionExitHandler::createInstruction() {
	return new InstructionExit();
}
