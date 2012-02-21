/**
 *
 *
 *
 */

#ifndef __ABSTRACTINSTRUCTIONWITHPARAMS_HH__
#define	__ABSTRACTINSTRUCTIONWITHPARAMS_HH__

#include <string>
#include <list>

#include <AbstractVM>
#include <Operand>
#include "AbstractInstruction.hh"

class AbstractInstructionWithParams : public AbstractInstruction {
protected:
	std::list<std::string> params;
	OperandInterface * operand;

public:
	AbstractInstructionWithParams();
	virtual ~AbstractInstructionWithParams();

	virtual void finalize();

	virtual void addParam(std::string param);

};

#endif
