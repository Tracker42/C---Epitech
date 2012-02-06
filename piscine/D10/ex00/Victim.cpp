/**
 *
 *
 *
 */

#include "Victim.hh"

Victim::Victim(std::string name)
: name(name) {
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const {
	return name;
}

void Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & os, Victim & victim) {
	return os << "I'm " << victim.getName() << " and i like otters !" << std::endl;
}
