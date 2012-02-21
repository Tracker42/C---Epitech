
#include "Lexer.hh"

#include <cstring>
#include <sstream>
#include <algorithm>

Lexer::Lexer() {

}

Lexer::~Lexer() {

}

std::list<Token *> & Lexer::getTokens() {
	return tokens;
}

void Lexer::setComment(std::string comment) {
	this->comment = comment;
}

void Lexer::addCutter(std::string& cutter) {
	addCutter(new BasicCutter(cutter));
}

void Lexer::addCutter(CutterInterface* cutter) {
	cutters.push_back(cutter);
}

void Lexer::addType(std::string & type, std::string & pattern) {
	addType(new BasicTokenType(type, pattern));
}

void Lexer::addType(TokenTypeInterface * type) {
	types.push_back(type);
}

TokenTypeInterface * Lexer::getType(std::string type) {
	std::list<TokenTypeInterface *>::iterator iter = types.begin();
	while (iter != types.end()) {
		if ((*iter)->getType() == type) {
			return *iter;
		}
		iter++;
	}
	return NULL;
}

void Lexer::execute(std::istream & file) {
	char buffer[4096];
	std::string line;
	tokens.push_back(new Token(TOKEN_CONTROL, TOKEN_BEGIN));
	while (!file.eof()) {
		memset(buffer, 0, 4096);
		file.getline(buffer, 4096);
		line.assign(buffer);
		clean(line);
		if (line.size()) {
			cut(line);
			tokens.push_back(new Token(TOKEN_CONTROL, TOKEN_ENDLINE));
		}
	}
	tokens.push_back(new Token(TOKEN_CONTROL, TOKEN_END));
}

void Lexer::clean(std::string & line) {
	int pos;
	if ((pos = line.find(comment)) != std::string::npos) {
		line = line.substr(0, pos);
	}
	std::stringstream ss;
	ss << line;
	ss >> std::ws;
	line = "";
	bool first = true;
	while (!ss.eof()) {
		if (!first) {
			line += " ";
		}
		std::string get;
		ss >> get;
		ss >> std::ws;
		line += get;
		first = false;
	}
}

void Lexer::cut(std::string & line) {
	while (line.length()) {
		size_t first = std::min(line.find(" "), line.find("\t"));
		CutterInterface * cutter = NULL;
		std::list<CutterInterface *>::iterator iter = cutters.begin();
		while (iter != cutters.end()) {
			size_t pos = (*iter)->next(line);
			if (first > pos) {
				first = pos;
				cutter = *iter;
			}
			iter++;
		}
		if (first == std::string::npos) {
			tokenize(line);
			line = "";
		}
		else {
			tokenize(line.substr(0, first));
			line = line.substr(first);
			if (cutter) {
				tokenize(cutter->cut(line));
			}
			else {
				while (line.length() && isspace(line[0])) {
					line = line.substr(1);
				}
			}
		}
	}
}

void Lexer::tokenize(std::string token) {
	clear(token);
	if (token.size()) {
		std::list<TokenTypeInterface *>::iterator iter = types.begin();
		while (iter != types.end()) {
			if ((*iter)->match(token)) {
				tokens.push_back(new Token((*iter)->getType(), token));
				return;
			}
			iter++;
		}
		tokens.push_back(new Token(std::string(TOKEN_DEFAULT), token));
	}
}

void Lexer::clear(std::string & token) {
	while (token.size() && isspace(token[0])) {
		token = token.substr(1);
	}
	while (token.size() && isspace(token[token.size() - 1])) {
		token = token.substr(0, token.size() - 1);
	}
}
