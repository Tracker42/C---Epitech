/**
 *
 *
 *
 */

#ifndef __PARSER_HH__
#define	__PARSER_HH__

#include <list>

#include <Token>

class Parser {
public:
	Parser();
	virtual ~Parser();

	void execute(std::list<Token *> tokens);

};

#endif
