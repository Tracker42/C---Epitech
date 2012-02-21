/**
 *
 *
 *
 */

#ifndef __SYNTAXANALYZERINTERFACE_HH__
#define	__SYNTAXANALYZERINTERFACE_HH__

#include <string>
#include <list>

#include <Token>
#include <Instruction>

class SyntaxAnalyzerInterface {
protected:

public:
	virtual bool match(std::list<Token *>::iterator begin, std::list<Token *>::iterator end) = 0;
	virtual InstructionInterface * create(std::list<Token *>::iterator begin, std::list<Token *>::iterator end) = 0;

};

#endif

