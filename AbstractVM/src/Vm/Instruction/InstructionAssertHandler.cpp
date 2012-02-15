
#include "InstructionAssertHandler.hh"
#include "InstructionAssert.hh"

InstructionAssertHandler::InstructionAssertHandler()
: AbstractInstructionHandler("assert") {

}

InstructionAssertHandler::~InstructionAssertHandler() {

}

InstructionInterface * InstructionAssertHandler::createInstruction() {
	return new InstructionAssert();
}
