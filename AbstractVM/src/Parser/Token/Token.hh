/**
 *
 *
 *
 */

#ifndef __TOKEN_HH__
#define	__TOKEN_HH__

#include <string>

class Token {
protected:
	std::string type;
	std::string value;

public:
	Token(std::string type, std::string value);
	virtual ~Token();

	std::string getType() const;
	std::string getValue() const;

	static bool isEqual(Token * token, std::string type, std::string value = "");

};

#endif
