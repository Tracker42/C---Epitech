/**
 *
 *
 *
 */

#include "Sorcerer.hh"
#include "Victim.hh"

Sorcerer::Sorcerer(std::string name, std::string title)
: name(name), title(title) {
	speak("is born !");
}

Sorcerer::~Sorcerer() {
	speak("is dead. Consequences will never be the same !");
}

void Sorcerer::speak(std::string message) {
	std::cout << name << ", " << title << ", " << message << std::endl;
}

std::string Sorcerer::getName() const {
	return name;
}

std::string Sorcerer::getTitle() const {
	return title;
}

void Sorcerer::polymorph(Victim const & civil) const {
	civil.getPolymorphed();
}

std::ostream & operator<<(std::ostream & os, Sorcerer & sorcerer) {
	return os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
}
