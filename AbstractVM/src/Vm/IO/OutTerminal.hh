/**
 *
 *
 *
 */

#ifndef __OUTTERMINAL_HH__
#define	__OUTTERMINAL_HH__

#include <string>
#include <iostream>

#include "OutInterface.hh"

class OutTerminal : public OutInterface {
protected:

public:
	OutTerminal();
	virtual ~OutTerminal();

	OutInterface & operator<<(std::string string);
	OutInterface & operator<<(OperandInterface * operand);

};

#endif
