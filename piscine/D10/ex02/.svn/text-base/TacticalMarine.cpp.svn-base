/**
 *
 *
 *
 */

#include "TacticalMarine.hh"

TacticalMarine::TacticalMarine() {
	speak("Tactical Marine ready for battle");
}

TacticalMarine::TacticalMarine(TacticalMarine const & marine) {
	(void) marine;
	speak("Tactical Marine ready for battle");
}

TacticalMarine::~TacticalMarine() {
	speak("Aaargh ...");
}

void TacticalMarine::speak(std::string message) const {
	std::cout << message << std::endl;
}

ISpaceMarine * TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const {
	speak("For the holy PLOT !");
}

void TacticalMarine::rangedAttack() const {
	speak("* attacks with bolter *");
}

void TacticalMarine::meleeAttack() const {
	speak("* attacks with chainsword *");
}
