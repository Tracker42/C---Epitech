#include "InstructionDivHandler.hh"
#include "InstructionDiv.hh"

InstructionDivHandler::InstructionDivHandler()
: AbstractInstructionHandler("div") {

}

InstructionDivHandler::~InstructionDivHandler() {

}

InstructionInterface * InstructionDivHandler::createInstruction() {
	return new InstructionDiv();
}
