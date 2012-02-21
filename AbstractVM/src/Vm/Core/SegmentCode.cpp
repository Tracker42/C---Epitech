
#include "SegmentCode.hh"

SegmentCode::SegmentCode() {

}

SegmentCode::~SegmentCode() {

}

size_t SegmentCode::size() const {
	return instructions.size();
}

void SegmentCode::addInstruction(InstructionInterface * instruction) {
	instructions.push_back(instruction);
}

void SegmentCode::prepare() {
	pos = instructions.begin();
}

InstructionInterface * SegmentCode::next() {
	if (pos == instructions.end()) {
		return NULL;
	}
	InstructionInterface * instruction = *pos;
	pos++;
	return instruction;
}
