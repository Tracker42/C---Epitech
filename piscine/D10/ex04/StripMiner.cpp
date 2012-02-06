/**
 *
 *
 *
 */

#include "StripMiner.hh"
#include "IAsteroid.hh"

StripMiner::StripMiner() {

}

StripMiner::~StripMiner() {

}

void StripMiner::mine(IAsteroid* asteroid) {
	std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
