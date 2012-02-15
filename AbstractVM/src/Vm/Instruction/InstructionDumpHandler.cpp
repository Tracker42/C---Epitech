
#include "InstructionDumpHandler.hh"
#include "InstructionDump.hh"

InstructionDumpHandler::InstructionDumpHandler()
: AbstractInstructionHandler("dump") {

}

InstructionDumpHandler::~InstructionDumpHandler() {

}

InstructionInterface * InstructionDumpHandler::createInstruction() {
	return new InstructionDump();
}
