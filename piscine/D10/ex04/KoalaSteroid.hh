/**
 *
 *
 *
 */

#ifndef __KOALASTEROID_H__
#define __KOALASTEROID_H__

#include <string>
#include <iostream>

#include "IAsteroid.hh"
#include "IMiningLaser.hh"
#include "DeepCoreMiner.hh"
#include "StripMiner.hh"

class KoalaSteroid : public IAsteroid {
public:
	KoalaSteroid();
	~KoalaSteroid();

	virtual std::string beMined(IMiningLaser *laser) const;
	virtual std::string beMined(DeepCoreMiner *laser) const;
	virtual std::string beMined(StripMiner *laser) const;
	virtual std::string getName() const;
};

#endif
