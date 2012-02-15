/**
 *
 *
 *
 */

#ifndef __PILE_HH__
#define	__PILE_HH__

#include <stack>

#include <AbstractVM>
#include <Operand>
#include "PileInterface.hh"

class Pile : public PileInterface {
protected:
	std::stack<OperandInterface *> pile;

public:
	Pile();
	virtual ~Pile();

	virtual void push(OperandInterface * item);
	virtual OperandInterface * get();
	virtual void pop();
	virtual void dump();

};

#endif
