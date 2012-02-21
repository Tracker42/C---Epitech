
#include "InstructionExit.hh"

#include <Exception>

InstructionExit::InstructionExit() {

}

InstructionExit::~InstructionExit() {

}

void InstructionExit::execute() {
	throw ExitException();
}
