
#include <cstring>
#include "Lexer.hh"

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

void Lexer::execute(std::ifstream & file) {
	char buffer[4096];
	std::string line;
	tokens.push_back(new Token(TOKEN_CONTROL, TOKEN_BEGIN));
	while (!file.eof()) {
		memset(buffer, 0, 4096);
		file.getline(buffer, 4096);
		line.assign(buffer);
		clean(line);
		cut(line);
		tokens.push_back(new Token(TOKEN_CONTROL, TOKEN_ENDLINE));
	}
	tokens.push_back(new Token(TOKEN_CONTROL, TOKEN_END));
}

void Lexer::executeFromFile(std::string & filename) {
	std::ifstream file(filename.data());
	if (file.good()) {
		execute(file);
	}
}

void Lexer::clean(std::string & line) {
	int pos;
	if ((pos = line.find(comment)) != std::string::npos) {
		line = line.substr(0, pos);
	}
}

void Lexer::cut(std::string & line) {
	while (line.length()) {
		size_t first = line.find(" ");
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
