/**
 *
 *
 *
 */

#ifndef __OUTINTERFACE_HH__
#define	__OUTINTERFACE_HH__

#include <string>

#include <Operand>

class OutInterface {
protected:

public:
	virtual OutInterface & operator<<(std::string string) = 0;
	virtual OutInterface & operator<<(OperandInterface * operand) = 0;

};

#endif

