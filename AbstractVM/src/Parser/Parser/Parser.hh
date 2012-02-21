/**
 *
 *
 *
 */

#ifndef __PARSER_HH__
#define	__PARSER_HH__

#include <list>

#include <Token>
#include <SegmentCode>
#include "SyntaxAnalyzerInterface.hh"

class Parser {
protected:
	std::list<SyntaxAnalyzerInterface *> analyzers;

	std::list<Token *>::iterator nextBegin(std::list<Token *>::iterator iter, std::list<Token *> & tokens);
	std::list<Token *>::iterator nextEnd(std::list<Token *>::iterator iter, std::list<Token *> & tokens);

public:
	Parser();
	virtual ~Parser();

	void addSyntaxAnalyzer(SyntaxAnalyzerInterface * analizer);

	SegmentCode * execute(std::list<Token *> & tokens);

};

#endif
