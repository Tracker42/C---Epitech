#include <string>
#include "ANCursesDisplay.hh"

ANCursesDisplay::ANCursesDisplay(std::string name, int minW, int minH)
: name(name), minWidth(minW), minHeight(minH) {

}

ANCursesDisplay::~ANCursesDisplay() {

}

std::string ANCursesDisplay::getName() {
	return this->name;
}

int ANCursesDisplay::getMinWidth() {
	return this->minWidth;
}

int ANCursesDisplay::getMinHeight() {
	return this->minHeight;
}
