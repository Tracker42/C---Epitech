/**
 *
 *
 */

#ifndef __SEGMENTCODE_HH__
#define	__SEGMENTCODE_HH__

#include <list>

#include <Instruction>

class SegmentCode {
protected:
	std::list<InstructionInterface *> instructions;
	std::list<InstructionInterface *>::iterator pos;

public:
	SegmentCode();
	virtual ~SegmentCode();

	size_t size() const;
	
	void addInstruction(InstructionInterface * instruction);

	void prepare();

	InstructionInterface * next();

};

#endif
