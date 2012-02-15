/**
 *
 *
 *
 */

#ifndef __LEXER_HH__
#define	__LEXER_HH__

#include <fstream>
#include <list>

#include <VMDef>
#include <Lexer>
#include <Token>

class Lexer {
protected:
	std::list<Token *> tokens;
	std::list<CutterInterface *> cutters;
	std::list<TokenTypeInterface *> types;
	std::string comment;

	void clean(std::string & line);
	void cut(std::string & line);
	void tokenize(std::string token);

public:
	Lexer();
	virtual ~Lexer();

	std::list<Token *> & getTokens();

	void setComment(std::string comment);
	void addCutter(std::string & cutter);
	void addCutter(CutterInterface * cutter);
	void addType(TokenTypeInterface * type);
	void addType(std::string & type, std::string & pattern);

	void execute(std::ifstream & file);
	void executeFromFile(std::string & filename);

};

#endif
