/**
 *
 *
 *
 */

#include "AsteroKreog.hh"

AsteroKreog::AsteroKreog() {

}

AsteroKreog::~AsteroKreog() {

}

std::string AsteroKreog::getName() const {
	return "AsteroKreog";
}

std::string AsteroKreog::beMined(IMiningLaser* laser) const {
	(void) laser;
	return "";
}

std::string AsteroKreog::beMined(DeepCoreMiner* laser) const {
	(void) laser;
	return "Sullite";
}

std::string AsteroKreog::beMined(StripMiner* laser) const {
	(void) laser;
	return "Kreogium";
}
