
#include "BasicTokenType.hh"

BasicTokenType::BasicTokenType(std::string type, std::string pattern)
: type(type), pattern(pattern) {

}

BasicTokenType::~BasicTokenType() {

}

std::string BasicTokenType::getType() {
	return type;
}

bool BasicTokenType::match(std::string token) {
	return token == pattern;
}
