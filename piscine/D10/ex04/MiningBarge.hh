/**
 *
 *
 *
 */

#ifndef __MININGBARGE_H__
#define __MININGBARGE_H__

#include <string>
#include <iostream>

#include "IAsteroid.hh"
#include "IMiningLaser.hh"

class MiningBarge {
protected:
	IMiningLaser *lasers[4];

public:
	MiningBarge();
	~MiningBarge();

	void equip(IMiningLaser *laser);
	void mine(IAsteroid *asteroid) const;
};

#endif
