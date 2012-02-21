/**
 *
 *
 *
 */

#ifndef __ABSTRACTINSTRUCTION_HH__
#define	__ABSTRACTINSTRUCTION_HH__

#include <AbstractVM>
#include "InstructionInterface.hh"

class AbstractInstruction : public InstructionInterface {
protected:

public:
	AbstractInstruction();
	virtual ~AbstractInstruction() = 0;

	virtual void initialize();
	virtual void finalize();

	virtual void addParam(std::string param);

	virtual void operator ()();

};

#endif
