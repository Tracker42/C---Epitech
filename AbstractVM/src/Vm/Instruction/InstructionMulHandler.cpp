#include "InstructionMulHandler.hh"
#include "InstructionMul.hh"

InstructionMulHandler::InstructionMulHandler()
: AbstractInstructionHandler("mul") {

}

InstructionMulHandler::~InstructionMulHandler() {

}

InstructionInterface * InstructionMulHandler::createInstruction() {
	return new InstructionMul();
}
