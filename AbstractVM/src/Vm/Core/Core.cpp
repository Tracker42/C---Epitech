
#include "Core.hh"

#include <Exception>

Core::Core() {

}

Core::~Core() {

}

void Core::execute(SegmentCode* instructions) {
	try {
		InstructionInterface * instruction;
		instructions->prepare();
		while ((instruction = instructions->next())) {
			instruction->execute();
		}
	}
	catch (ExitException & e) {
		return;
	}
	throw StopException("No exit instruction");
}
