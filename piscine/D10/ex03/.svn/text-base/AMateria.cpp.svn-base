/**
 *
 *
 *
 */

#include "AMateria.hh"

AMateria::AMateria(std::string const & type)
: xp(0), type(type) {

}

AMateria::~AMateria() {

}

unsigned int AMateria::getXP() const {
	return xp;
}

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter & target) {
	xp += 10;
	effect(target);
}

void AMateria::effect(ICharacter& target) {
	(void) target;
}

void AMateria::speak(std::string message) {
	std::cout << message << std::endl;
}
