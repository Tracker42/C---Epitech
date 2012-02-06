/**
 *
 *
 *
 */

#include "Cure.hh"

Cure::Cure()
: AMateria("cure") {

}

Cure::Cure(Cure const & cure)
: AMateria("cure") {
	this->xp = cure.xp;
}

Cure::~Cure() {

}

AMateria * Cure::clone() const {
	return new Cure(*this);
}

void Cure::effect(ICharacter & target) {
	speak(std::string("* heals ") + target.getName() + "'s wounds *");
}
