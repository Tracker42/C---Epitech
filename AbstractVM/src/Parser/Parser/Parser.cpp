
#include "Parser.hh"

#include <Exception>
#include <VMDef>

Parser::Parser() {

}

Parser::~Parser() {

}

void Parser::addSyntaxAnalyzer(SyntaxAnalyzerInterface* analizer) {
	analyzers.push_back(analizer);
}

SegmentCode * Parser::execute(std::list<Token *> & tokens) {
	SegmentCode * instructions = new SegmentCode();
	std::list<Token *>::iterator begin = tokens.begin();
	std::list<Token *>::iterator end = begin;
	bool ok;
	if (Token::isEqual(*begin, TOKEN_CONTROL, TOKEN_BEGIN)) {
		begin++;
		end = nextEnd(begin, tokens);
		while (begin != tokens.end()) {
			if ((*begin)->getType() == TOKEN_CONTROL) {
				break;
			}
			ok = false;
			std::list<SyntaxAnalyzerInterface *>::iterator analyzer = analyzers.begin();
			while (analyzer != analyzers.end()) {
				if ((*analyzer)->match(begin, end)) {
					instructions->addInstruction((*analyzer)->create(begin, end));
					ok = true;
					break;
				}
				analyzer++;
			}
			if (!ok) {
				throw ParserException();
			}
			begin = nextBegin(end, tokens);
			end = nextEnd(begin, tokens);
		}
		return instructions;
	}
	throw ParserException();
}

std::list<Token *>::iterator Parser::nextBegin(std::list<Token*>::iterator iter, std::list<Token *> & tokens) {
	while (!Token::isEqual(*iter, TOKEN_CONTROL, TOKEN_ENDLINE)) {
		if (iter == tokens.end()) {
			return iter;
		}
		iter++;
	}
	return ++iter;
}

std::list<Token *>::iterator Parser::nextEnd(std::list<Token*>::iterator iter, std::list<Token *> & tokens) {
	while (!Token::isEqual(*iter, TOKEN_CONTROL, TOKEN_ENDLINE)) {
		if (iter == tokens.end()) {
			return iter;
		}
		iter++;
	}
	return --iter;
}
