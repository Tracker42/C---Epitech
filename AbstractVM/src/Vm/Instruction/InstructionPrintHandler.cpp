#include "InstructionPrintHandler.hh"
#include "InstructionPrint.hh"

InstructionPrintHandler::InstructionPrintHandler()
: AbstractInstructionHandler("print") {

}

InstructionPrintHandler::~InstructionPrintHandler() {

}

InstructionInterface * InstructionPrintHandler::createInstruction() {
	return new InstructionPrint();
}
