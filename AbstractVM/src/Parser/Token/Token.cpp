
#include "Token.hh"

Token::Token(std::string type, std::string value)
: type(type), value(value) {

}

Token::~Token() {

}

std::string Token::getType() const {
	return type;
}

std::string Token::getValue() const {
	return value;
}

bool Token::isEqual(Token* token, std::string type, std::string value) {
	if (value.empty()) {
		return token->type == type;
	}
	return token->type == type && token->value == value;
}
