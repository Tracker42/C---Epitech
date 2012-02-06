/**
 *
 *
 *
 */

#include "MiningBarge.hh"

MiningBarge::MiningBarge() {
	int i;
	for (i = 0; i < 4; i++) {
		lasers[i] = NULL;
	}
}

MiningBarge::~MiningBarge() {

}

void MiningBarge::equip(IMiningLaser* laser) {
	int i;
	for (i = 0; i < 4; i++) {
		if (!lasers[i]) {
			lasers[i] = laser;
			return;
		}
	}
}

void MiningBarge::mine(IAsteroid* asteroid) const {
	int i;
	for (i = 0; i < 4; i++) {
		if (lasers[i]) {
			lasers[i]->mine(asteroid);
		}
	}
}
