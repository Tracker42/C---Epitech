/**
 *
 *
 *
 */

#ifndef __ASTEROKREOG_H__
#define __ASTEROKREOG_H__

#include <string>
#include <iostream>

#include "IAsteroid.hh"
#include "IMiningLaser.hh"
#include "DeepCoreMiner.hh"
#include "StripMiner.hh"

class AsteroKreog : public IAsteroid {
public:
	AsteroKreog();
	~AsteroKreog();

	virtual std::string beMined(IMiningLaser *laser) const;
	virtual std::string beMined(DeepCoreMiner *laser) const;
	virtual std::string beMined(StripMiner *laser) const;
	virtual std::string getName() const;
};

#endif
