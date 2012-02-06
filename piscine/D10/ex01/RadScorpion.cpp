/**
 *
 *
 *
 */

#include "RadScorpion.hh"

RadScorpion::RadScorpion()
: AEnemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}
