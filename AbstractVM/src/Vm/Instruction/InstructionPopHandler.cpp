#include "InstructionPopHandler.hh"
#include "InstructionPop.hh"

InstructionPopHandler::InstructionPopHandler()
: AbstractInstructionHandler("pop") {

}

InstructionPopHandler::~InstructionPopHandler() {

}

InstructionInterface * InstructionPopHandler::createInstruction() {
	return new InstructionPop();
}
