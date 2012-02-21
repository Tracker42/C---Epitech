/**
 *
 *
 *
 */

#ifndef __SYNTAXANALYZER_HH__
#define	__SYNTAXANALYZER_HH__

#include <string>
#include <list>

#include <Token>
#include "SyntaxAnalyzerInterface.hh"

class SyntaxAnalyzer : public SyntaxAnalyzerInterface {
protected:
	std::list<TokenTypeInterface *> sort;
public:
	SyntaxAnalyzer();
	virtual ~SyntaxAnalyzer();

	void addTokenType(TokenTypeInterface * type);

	virtual bool match(std::list<Token *>::iterator begin, std::list<Token *>::iterator end);
	virtual InstructionInterface * create(std::list<Token *>::iterator begin, std::list<Token *>::iterator end);

};

#endif
