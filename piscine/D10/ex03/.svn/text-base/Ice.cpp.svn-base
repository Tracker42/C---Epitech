/**
 *
 *
 *
 */

#include "Ice.hh"

Ice::Ice()
: AMateria("ice") {

}

Ice::Ice(Ice const & ice)
: AMateria("ice") {
	this->xp = ice.xp;
}

Ice::~Ice() {

}

AMateria * Ice::clone() const {
	return new Ice(*this);
}

void Ice::effect(ICharacter & target) {
	speak(std::string("* shoots an ice bolt at ") + target.getName() + " *");
}
