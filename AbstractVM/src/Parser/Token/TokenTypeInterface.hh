/**
 *
 *
 *
 */

#ifndef __TOKENTYPEINTERFACE_HH__
#define	__TOKENTYPEINTERFACE_HH__

#include <string>

class TokenTypeInterface {
protected:

public:
	virtual std::string getType() = 0;
	virtual bool match(std::string token) = 0;

};

#endif
