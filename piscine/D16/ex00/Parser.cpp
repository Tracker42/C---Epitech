/**
 *
 *
 *
 */

#include "Parser.h"

Parser::Parser() {
	result = 0;
}

Parser::Parser(const Parser & source) {
	operators = source.operators;
	operands = source.operands;
	result = source.result;
}

Parser::~Parser() {

}

void Parser::feed(const std::string & operation) {
	run(std::string("(") + operation + ")");
}

int Parser::result() const {
	return result;
}

void Parser::reset() {
	std::stack<std::string> clear;
	operators = clear;
	operands = clear;
	result =  0;
}

void Parser::run(const std::string & operation) {
	int op;
	int open = operation.find("(");
	int closed = operation.find(")");
}
