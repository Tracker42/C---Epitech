/**
 *
 *
 *
 */

#ifndef __BASICTOKENTYPE_HH__
#define	__BASICTOKENTYPE_HH__

#include "TokenTypeInterface.hh"

class BasicTokenType : public TokenTypeInterface {
protected:
	std::string type;
	std::string pattern;

public:
	BasicTokenType(std::string type, std::string pattern);
	virtual ~BasicTokenType();

	virtual std::string getType();
	virtual bool match(std::string token);

};

#endif
