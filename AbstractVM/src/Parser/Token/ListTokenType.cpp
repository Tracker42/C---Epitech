
#include <algorithm>
#include "ListTokenType.hh"

ListTokenType::ListTokenType(std::string type)
: type(type) {

}

ListTokenType::~ListTokenType() {

}

void ListTokenType::addPattern(std::string & pattern) {
	patterns.push_back(pattern);
}

void ListTokenType::addListPattern(std::list<std::string> patterns) {
	std::list<std::string>::iterator iter = patterns.begin();
	while (iter != patterns.end()) {
		this->patterns.push_back(*iter);
		iter++;
	}
}

std::string ListTokenType::getType() {
	return type;
}

bool ListTokenType::match(std::string token) {
	if (std::find(patterns.begin(), patterns.end(), token) != patterns.end()) {
		return true;
	}
	return false;
}
