
#include "InstructionPushHandler.hh"
#include "InstructionPush.hh"

InstructionPushHandler::InstructionPushHandler()
: AbstractInstructionHandler("push") {

}

InstructionPushHandler::~InstructionPushHandler() {

}

InstructionInterface * InstructionPushHandler::createInstruction() {
	return new InstructionPush();
}
