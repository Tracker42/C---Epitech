
#include "AbstractInstructionHandler.hh"
#include "InstructionInterface.hh"
#include "AbstractInstruction.hh"

AbstractInstructionHandler::AbstractInstructionHandler(std::string tag)
: tag(tag) {

}

AbstractInstructionHandler::~AbstractInstructionHandler() {

}

const std::string & AbstractInstructionHandler::getTag() const {
	return tag;
}

InstructionInterface * AbstractInstructionHandler::create() {
	InstructionInterface * instr = createInstruction();
	instr->initialize();
	return instr;
}
