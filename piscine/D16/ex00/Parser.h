/**
 *
 *
 *
 */

#ifndef __PARSER_H__
#define	__PARSER_H__

#include <string>
#include <stack>

class Parser {
protected:
	std::stack<std::string> operators;
	std::stack<std::string> operands;
	int result;

	void run(std::string & operation);

public:
	Parser();
	Parser(const Parser & source);
	virtual ~Parser();

	void feed(const std::string &);
	int result() const;
	void reset();

};

#endif
