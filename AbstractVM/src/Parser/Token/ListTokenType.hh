/**
 *
 *
 *
 */

#ifndef __LISTTOKENTYPE_HH__
#define	__LISTTOKENTYPE_HH__

#include <string>
#include <list>

#include <Token>

class ListTokenType : public TokenTypeInterface {
protected:
	std::string type;
	std::list<std::string> patterns;

public:
	ListTokenType(std::string type);
	virtual ~ListTokenType();

	void addPattern(std::string & pattern);
	void addListPattern(std::list<std::string> patterns);

	virtual std::string getType();
	virtual bool match(std::string token);

};

#endif
