/**
 *
 *
 *
 */

#ifndef __OPERANDDOUBLEHANDLER_HH__
#define	__OPERANDDOUBLEHANDLER_HH__

#include "AbstractOperandHandler.hh"

class OperandDoubleHandler : public AbstractOperandHandler {
protected:

public:
	OperandDoubleHandler();
	virtual ~OperandDoubleHandler();

	virtual OperandInterface * create(const std::string & value);

};

#endif
