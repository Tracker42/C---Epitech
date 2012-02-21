/**
 *
 *
 *
 */

#ifndef __PILEINTERFACE_HH__
#define	__PILEINTERFACE_HH__

#include <Operand>

class PileInterface {
protected:

public:
	virtual void push(OperandInterface * item) = 0;
	virtual OperandInterface * get() = 0;
	virtual void pop() = 0;
	virtual void dump() = 0;

};

#endif

