
#include "BasicCutter.hh"

BasicCutter::BasicCutter(std::string pattern)
: pattern(pattern) {

}

BasicCutter::~BasicCutter() {

}

size_t BasicCutter::next(const std::string & line) {
	return line.find(pattern.data());
}

std::string BasicCutter::cut(std::string & line) {
	if (line.find(pattern) != 0) {
		//throw std::exception("bad cut");
	}
	std::string sub = line.substr(0, pattern.length());
	line = line.substr(pattern.length());
	return sub;
}
